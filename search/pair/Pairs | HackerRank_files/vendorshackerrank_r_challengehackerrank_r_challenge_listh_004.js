(window.webpackJsonp=window.webpackJsonp||[]).push([[4],{"6acW":function(e,t,n){var r=n("dt0z"),i=n("gQMU");e.exports=function(e){return i(r(e).toLowerCase())}},MfAl:function(e,t,n){"use strict";n("VRzm");var r=n("MrcO"),i=n("ZaSc"),o=n("Ckvm"),u={};t.a=function(e){return new Promise((function(t,n){if(u[e])t(u[e]);else if(r.a.get(e)){var a=r.a.get(e);u[e]=a,t(a)}else Object(i.g)({url:"".concat(Object(o.b)(),"shorten"),data:{url:encodeURIComponent(e)},success:function(n){var i=n.url;u[e]=i,r.a.set(e,i),t(i)},error:n})}))}},MrcO:function(e,t,n){"use strict";n("a1Th"),n("h7Nl"),n("I5cv"),n("hHhE"),n("9VmF"),n("8+KV"),n("rGqo"),n("yt8O"),n("RW0V");var r=n("lwsE"),i=n.n(r),o=n("W8MJ"),u=n.n(o),a=n("7W2i"),c=n.n(a),s=n("a1gu"),f=n.n(s),l=n("Nsbk"),h=n.n(l),v=n("oShl"),p=n.n(v),d=n("MVZn"),y=n.n(d),m=n("lSNA"),S=n.n(m),w=n("eOGF");function g(e){var t=function(){if("undefined"==typeof Reflect||!Reflect.construct)return!1;if(Reflect.construct.sham)return!1;if("function"==typeof Proxy)return!0;try{return Date.prototype.toString.call(Reflect.construct(Date,[],(function(){}))),!0}catch(e){return!1}}();return function(){var n,r=h()(e);if(t){var i=h()(this).constructor;n=Reflect.construct(r,arguments,i)}else n=r.apply(this,arguments);return f()(this,n)}}var k=function(e){c()(n,e);var t=g(n);function n(){return i()(this,n),t.apply(this,arguments)}return u()(n,[{key:"setItem",value:function(e,t){this[e]=t}},{key:"getItem",value:function(e){return this[e]}},{key:"removeItem",value:function(e){delete this[e]}}]),n}(p()(Object)),b=new(function(){function e(t,n){var r=this,o=arguments.length>2&&void 0!==arguments[2]?arguments[2]:{};i()(this,e),S()(this,"dbName",void 0),S()(this,"namespace",void 0),S()(this,"intermediateStore",{}),S()(this,"persistentStore",void 0),S()(this,"onWindowUnload",void 0),S()(this,"flushIntervalID",void 0);var u=o.namespace,a=void 0===u?"":u,c=o.persistOnUnload,s=void 0===c||c,f=o.flushInterval,l=void 0===f?3e3:f;this.dbName=n,this.namespace=a,this.persistentStore=t,!a&&n&&this.initBaseStore(s,n),this.flushIntervalID=setInterval((function(){return r.flush()}),l)}return u()(e,[{key:"initBaseStore",value:function(e,t){var n=this;try{var r=this.persistentStore.getItem(t);if(r){var i=JSON.parse(r);this.intermediateStore=i}}catch(e){this.intermediateStore={}}e&&!Object(w.G)()&&window.addEventListener("beforeunload",(function(){return n.flush()}))}},{key:"flush",value:function(){try{this.persistentStore.setItem(this.dbName,JSON.stringify(this.intermediateStore))}catch(e){console.error(e)}}},{key:"getKey",value:function(e){return this.namespace?"".concat(this.namespace,"-").concat(e):e}},{key:"setItem",value:function(e,t){this.intermediateStore[this.getKey(e)]=t}},{key:"getItem",value:function(e){return this.intermediateStore[this.getKey(e)]}},{key:"set",value:function(e,t){return this.setItem(e,t)}},{key:"get",value:function(e){return this.getItem(e)}},{key:"removeItem",value:function(e){delete this.intermediateStore[this.getKey(e)]}},{key:"deleteKey",value:function(e){return this.removeItem(e)}},{key:"storageObj",value:function(){return y()({},this.intermediateStore)}},{key:"index",value:function(){return Object.keys(this.intermediateStore)}},{key:"removePrefix",value:function(e){var t=this;Object.keys(this.intermediateStore).forEach((function(n){n.startsWith(e)&&delete t.intermediateStore[n]}))}},{key:"createNamespace",value:function(e){if(!e)throw new Error("Cannot create storage without namespace");var t=Object.create(this);return t.namespace=this.getKey(e),t}},{key:"remove",value:function(){this.namespace&&this.removePrefix(this.namespace)}}]),e}())("undefined"==typeof localStorage?new k:localStorage,"jStorage");"undefined"!=typeof window&&(window.jStorage=b,window.$=window.$||{},window.$.jStorage=b);t.a=b},hHhE:function(e,t,n){var r=n("XKFU");r(r.S,"Object",{create:n("Kuth")})},oShl:function(e,t,n){var r=n("Nsbk"),i=n("SksO"),o=n("xfeJ"),u=n("sXyB");function a(t){var n="function"==typeof Map?new Map:void 0;return e.exports=a=function(e){if(null===e||!o(e))return e;if("function"!=typeof e)throw new TypeError("Super expression must either be null or a function");if(void 0!==n){if(n.has(e))return n.get(e);n.set(e,t)}function t(){return u(e,arguments,r(this).constructor)}return t.prototype=Object.create(e.prototype,{constructor:{value:t,enumerable:!1,writable:!0,configurable:!0}}),i(t,e)},a(t)}e.exports=a},sXyB:function(e,t,n){var r=n("SksO");function i(){if("undefined"==typeof Reflect||!Reflect.construct)return!1;if(Reflect.construct.sham)return!1;if("function"==typeof Proxy)return!0;try{return Date.prototype.toString.call(Reflect.construct(Date,[],(function(){}))),!0}catch(e){return!1}}function o(t,n,u){return i()?e.exports=o=Reflect.construct:e.exports=o=function(e,t,n){var i=[null];i.push.apply(i,t);var o=new(Function.bind.apply(e,i));return n&&r(o,n.prototype),o},o.apply(null,arguments)}e.exports=o},u6S6:function(e,t,n){var r=n("6acW"),i=n("sgoq")((function(e,t,n){return t=t.toLowerCase(),e+(n?r(t):t)}));e.exports=i},wy8a:function(e,t,n){var r=n("KxBF");e.exports=function(e,t,n){var i=e.length;return n=void 0===n?i:n,!t&&n>=i?e:r(e,t,n)}},xfeJ:function(e,t){e.exports=function(e){return-1!==Function.toString.call(e).indexOf("[native code]")}}}]);
//# sourceMappingURL=https://hrcdn.net/community-frontend/assets/sourcemaps/vendors~hackerrank_r_challenge~hackerrank_r_challenge_list~hackerrank_r_challenge_list_v2~hackerrank~4b83ee7d-15e30f497e.js.map