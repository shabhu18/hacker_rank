(window.webpackJsonp=window.webpackJsonp||[]).push([[48],{QahQ:function(t,n,e){"use strict";e("a1Th"),e("h7Nl"),e("I5cv"),e("2Spj");var r=e("RIqP"),a=e.n(r),o=e("lwsE"),i=e.n(o),c=e("W8MJ"),s=e.n(c),u=e("PJYZ"),l=e.n(u),d=e("7W2i"),f=e.n(d),p=e("a1gu"),v=e.n(p),h=e("Nsbk"),m=e.n(h),y=e("pVnL"),A=e.n(y),_=e("QILm"),k=e.n(_),b=e("lSNA"),N=e.n(b),g=e("cDcd"),S=e.n(g),w=e("/MKj"),j=e("17x9"),I=e.n(j),E=e("jNdJ");function R(t){var n=function(){if("undefined"==typeof Reflect||!Reflect.construct)return!1;if(Reflect.construct.sham)return!1;if("function"==typeof Proxy)return!0;try{return Date.prototype.toString.call(Reflect.construct(Date,[],(function(){}))),!0}catch(t){return!1}}();return function(){var e,r=m()(t);if(n){var a=m()(this).constructor;e=Reflect.construct(r,arguments,a)}else e=r.apply(this,arguments);return v()(this,e)}}var C=function(t){f()(e,t);var n=R(e);function e(){var t;i()(this,e);for(var r=arguments.length,a=new Array(r),o=0;o<r;o++)a[o]=arguments[o];return t=n.call.apply(n,[this].concat(a)),N()(l()(t),"state",{adSeen:!1}),N()(l()(t),"onAdSeen",(function(n){!t.state.adSeen&&n.intersectionRatio>=1&&t.setState({adSeen:!0},(function(){t.metrics("View")}))})),t}return s()(e,[{key:"metrics",value:function(t){var n=this.props,e=n.sendMetrics,r=n.adUnit;e&&e(t,r)}},{key:"render",value:function(){var t,n,e=this.props,r=e.children,o=e.component,i=e.slot,c=e.adUnit,s=e.minItems,u=k()(e,["children","component","slot","adUnit","minItems"]),l=null!==(t=null==c||null===(n=c.metadata)||void 0===n?void 0:n.position)&&void 0!==t?t:this.props.position,d=S.a.Children.toArray(r);if(d.length<s||!c)return r;var f={root:null,rootMargin:"0px",threshold:1,onChange:this.onAdSeen};return S.a.createElement(g.Fragment,null,[].concat(a()(d.slice(0,l)),[S.a.createElement(E.a,A()({key:"NativeAd-".concat(i,"-").concat(l)},f),S.a.createElement(o,A()({slot:i,promoMeta:c,ref:this.onAdLoad,onClick:this.metrics.bind(this,"Click"),onClose:this.props.onClose},u)))],a()(d.slice(l,d.length))))}}]),e}(g.PureComponent);N()(C,"propTypes",{component:I.a.node.isRequired,slot:I.a.string.isRequired,position:I.a.number,sendMetrics:I.a.func,minItems:I.a.number,adUnit:I.a.shape({ad_unit_type:I.a.string,heading:I.a.string,subtitle:I.a.string,cta_link:I.a.string,cta_text:I.a.string,metadata:I.a.shape({position:I.a.number,background:I.a.string,ctas_arr:I.a.array})}),onClick:I.a.func,children:I.a.oneOfType([I.a.arrayOf(I.a.node),I.a.node])}),N()(C,"defaultProps",{minItems:0,position:0,children:null});n.a=Object(w.c)((function(t,n){var e=n.slot,r="hackerrankx"===t.metadata.productNamespace?t.work.nativeAds:t.community.nativeAds;return{adUnit:r&&r[e]}}))(C)},T39b:function(t,n,e){"use strict";var r=e("wmvG"),a=e("s5qY");t.exports=e("4LiD")("Set",(function(t){return function(){return t(this,arguments.length>0?arguments[0]:void 0)}}),{add:function(t){return r.def(a(this,"Set"),t=0===t?0:t,t)}},r)},jNdJ:function(t,n,e){"use strict";e("VRzm");var r=e("PJYZ"),a=e.n(r),o=(e("a1Th"),e("h7Nl"),e("I5cv"),e("lwsE")),i=e.n(o),c=e("W8MJ"),s=e.n(c),u=e("7W2i"),l=e.n(u),d=e("a1gu"),f=e.n(d),p=e("Nsbk"),v=e.n(p),h=e("w13Q"),m=e("QILm"),y=e.n(m),A=e("lSNA"),_=e.n(A),k=e("cDcd"),b=e.n(k);function N(t){var n=function(){if("undefined"==typeof Reflect||!Reflect.construct)return!1;if(Reflect.construct.sham)return!1;if("function"==typeof Proxy)return!0;try{return Date.prototype.toString.call(Reflect.construct(Date,[],(function(){}))),!0}catch(t){return!1}}();return function(){var e,r=v()(t);if(n){var a=v()(this).constructor;e=Reflect.construct(r,arguments,a)}else e=r.apply(this,arguments);return f()(this,e)}}var g=function(t){l()(e,t);var n=N(e);function e(){return i()(this,e),n.apply(this,arguments)}return s()(e,[{key:"render",value:function(){return this.props.children}}]),e}(k.PureComponent),S=function(t){l()(r,t);var n=N(r);function r(){var t;i()(this,r);for(var e=arguments.length,o=new Array(e),c=0;c<e;c++)o[c]=arguments[c];return t=n.call.apply(n,[this].concat(o)),_()(a()(t),"state",{observer:null}),_()(a()(t),"hasUnmounted",!1),t}return s()(r,[{key:"loadObserverModules",value:function(){return new Promise((function(t,n){var r;r=n,e.e(98).then(function(n){void 0===window.IntersectionObserver&&(e("T39b"),e("9AAn"),e("Wr5T"));var r=e("fadw").default;t(r)}.bind(null,e)).catch(r)}))}},{key:"componentDidMount",value:function(){var t=this;this.loadObserverModules().then((function(n){t.hasUnmounted||t.setState({observer:n})}))}},{key:"componentWillUnmount",value:function(){this.hasUnmounted=!0}},{key:"render",value:function(){var t=this.props,n=t.children,e=y()(t,["children"]),r=this.state.observer,a=r||k.Fragment,o=r?e:{};return b.a.createElement(a,o,b.a.createElement(g,null,b.a.Children.only(n)))}}]),r}(k.PureComponent);n.a=S,Object(h.d)("hackerrank_r_intersection_observer.js")},ySAj:function(t,n,e){"use strict";var r=e("ZaSc"),a=e("UQja"),o=e("Ckvm"),i=Object(o.b)(),c="".concat(i,"community/v1/"),s="".concat(i,"ent/api/v1/"),u={loadNativeAds:"".concat(c,"promotion_slots/::slot"),loadNativeAdsEnt:"".concat(s,"promotion_slots/::slot"),dismissNativeAd:"".concat(c,"promotion_slots/dismiss_ad"),dismissNativeAdEnt:"".concat(s,"user_ad_unit_associations/ad_unit/::ad_unit_id"),clearKeyNativeAd:"".concat(c,"promotion_slots/clear_ad_unit_key")};function l(t){var n=arguments.length>1&&void 0!==arguments[1]?arguments[1]:{};return Object(a.a)(u,t,n)}var d=e("/SOd"),f={loadNativeAds:function(t,n){return function(e){var a=t.slot,o=t.productType;return Object(r.c)({url:l("hackerrank"===o?"loadNativeAds":"loadNativeAdsEnt",{slot:a}),ajaxServerConf:n,headers:{Accept:"application/vnd.api+json"},success:function(t){var n=(t.data.attributes||{}).ad_unit;e({type:d.a.NATIVE_AD.LOAD_NATIVE_ADS,data:{slot:a,adUnit:n}})}})}},dismissNativeAd:function(t,n){return function(e){var a=t.slot,o=t.id,i=t.ad_unit_type,c=t.productType,s="hackerrank"===c?"dismissNativeAd":"dismissNativeAdEnt",u="hackerrank"===c?a:i;return Object(r.f)({url:l(s,{ad_unit_id:o}),ajaxServerConf:n,headers:{Accept:"application/vnd.api+json"},data:{ad_unit_id:o},success:function(){e({type:d.a.NATIVE_AD.DISMISS_NATIVE_ADS,data:{slot:u}})},error:function(t){console.log("error ",t)}})}}};n.a=f}}]);
//# sourceMappingURL=https://hrcdn.net/community-frontend/assets/sourcemaps/vendors~hackerrank_r_community~hackerrank_r_library-01dd59359d.js.map