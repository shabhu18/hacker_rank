(window.webpackJsonp=window.webpackJsonp||[]).push([[32],{"0e0P":function(e,t,n){"use strict";n.d(t,"a",(function(){return O}));n("a1Th"),n("h7Nl"),n("I5cv");var o=n("lwsE"),r=n.n(o),i=n("W8MJ"),a=n.n(i),c=n("PJYZ"),p=n.n(c),s=n("7W2i"),u=n.n(s),l=n("a1gu"),f=n.n(l),v=n("Nsbk"),d=n.n(v),h=n("pVnL"),m=n.n(h),g=n("lSNA"),y=n.n(g),P=n("cDcd"),b=n.n(P),T=n("eOGF");function E(e){var t=function(){if("undefined"==typeof Reflect||!Reflect.construct)return!1;if(Reflect.construct.sham)return!1;if("function"==typeof Proxy)return!0;try{return Date.prototype.toString.call(Reflect.construct(Date,[],(function(){}))),!0}catch(e){return!1}}();return function(){var n,o=d()(e);if(t){var r=d()(this).constructor;n=Reflect.construct(o,arguments,r)}else n=o.apply(this,arguments);return f()(this,n)}}function O(e){return function(t){u()(o,t);var n=E(o);function o(){var e;r()(this,o);for(var t=arguments.length,i=new Array(t),a=0;a<t;a++)i[a]=arguments[a];return e=n.call.apply(n,[this].concat(i)),y()(p()(e),"state",{isAppMounted:!!Object(T.B)()}),e}return a()(o,[{key:"componentDidMount",value:function(){this.setAppMounted()}},{key:"setAppMounted",value:function(){this.state.isAppMounted||this.setState({isAppMounted:!0})}},{key:"render",value:function(){var t=this.props,n=this.state.isAppMounted;return b.a.createElement(e,m()({},t,{isAppMounted:n}))}}]),o}(b.a.Component)}},"1OM/":function(e,t,n){"use strict";n.d(t,"b",(function(){return D})),n.d(t,"a",(function(){return M}));n("a1Th"),n("h7Nl"),n("I5cv");var o=n("lSNA"),r=n.n(o),i=n("lwsE"),a=n.n(i),c=n("W8MJ"),p=n.n(c),s=n("PJYZ"),u=n.n(s),l=n("7W2i"),f=n.n(l),v=n("a1gu"),d=n.n(v),h=n("Nsbk"),m=n.n(h),g=n("pVnL"),y=n.n(g),P=n("QILm"),b=n.n(P),T=n("cDcd"),E=n.n(T),O=n("TSYQ"),k=n.n(O),w=n("eOGF"),N=n("/n7Q"),A=n("bIS8"),C=n("wqqT"),W=n("61np");n("ufwU");function R(e){var t=function(){if("undefined"==typeof Reflect||!Reflect.construct)return!1;if(Reflect.construct.sham)return!1;if("function"==typeof Proxy)return!0;try{return Date.prototype.toString.call(Reflect.construct(Date,[],(function(){}))),!0}catch(e){return!1}}();return function(){var n,o=m()(e);if(t){var r=m()(this).constructor;n=Reflect.construct(o,arguments,r)}else n=o.apply(this,arguments);return d()(this,n)}}var S=function(e){f()(n,e);var t=R(n);function n(){var e;a()(this,n);for(var o=arguments.length,i=new Array(o),c=0;c<o;c++)i[c]=arguments[c];return e=t.call.apply(t,[this].concat(i)),r()(u()(e),"input",void 0),r()(u()(e),"tooltip",void 0),e}return p()(n,[{key:"render",value:function(){var e,t=this.props,n=t.icon,o=t.iconAlignment,i=t.wrapperClass,a=t.className,c=t.hintMessage,p=t.loading,s=t.error,u=t.inputRef,l=t.theme,f=t.size,v=t.placeholder,d=t.id,h=t.type,m=b()(t,["icon","iconAlignment","wrapperClass","className","hintMessage","loading","error","inputRef","theme","size","placeholder","id","type"]),g="tooltip-".concat(d),P=E.a.createElement("span",{id:g},c),T="textarea"===h,O=T?"textarea":"input",w="string"==typeof n&&E.a.createElement("i",{className:k()(n,"input-icon")}),N=T?{}:(e={},r()(e,"align-icon-".concat(o),n),r()(e,"has-icon",n),r()(e,"has-loader",p),e);return E.a.createElement("div",{className:k()("custom-input",l,"size-".concat(f))},E.a.createElement("div",{className:k()("input-wrap",N,i)},E.a.createElement(W.a,{align:"right",eventType:"focus",content:P,disabled:!c},E.a.createElement(O,y()({ref:u,id:d,type:T?void 0:h,className:k()("input",{error:!!s,"text-area":T},a),placeholder:v,"aria-label":v,"aria-invalid":!!s,"aria-describedby":c?g:void 0},m))),!T&&n&&!(p&&"right"===o)&&(w||E.a.createElement(n,{className:"input-icon"})),!T&&p&&E.a.createElement(C.a,{className:"input-loading",diameter:24})),s&&"string"==typeof s&&E.a.createElement("div",{className:"d-flex align-items-start error-message",role:"alert"},E.a.createElement(A.InfoIcon,{className:"error-icon"}),s),s&&E.a.isValidElement(s)&&E.a.createElement("div",{className:"error-message",role:"alert"},s))}}]),n}(T.PureComponent);r()(S,"defaultProps",{iconAlignment:"left",hintMessage:"",error:!1,icon:"",loading:!1,inputRef:w.J,theme:"theme-old",size:"medium",type:"text"});var D=Object(N.d)("input")(S),M=Object(N.d)("input")((function(e){e.type;var t=b()(e,["type"]);return E.a.createElement(S,y()({type:"textarea"},t))}))},"3N0A":function(e,t,n){"use strict";n("a1Th"),n("h7Nl"),n("I5cv");var o=n("lwsE"),r=n.n(o),i=n("W8MJ"),a=n.n(i),c=n("PJYZ"),p=n.n(c),s=n("7W2i"),u=n.n(s),l=n("a1gu"),f=n.n(l),v=n("Nsbk"),d=n.n(v),h=n("lSNA"),m=n.n(h),g=n("cDcd"),y=n("faye"),P=n.n(y),b=n("0e0P"),T=n("TXrv");function E(e){var t=function(){if("undefined"==typeof Reflect||!Reflect.construct)return!1;if(Reflect.construct.sham)return!1;if("function"==typeof Proxy)return!0;try{return Date.prototype.toString.call(Reflect.construct(Date,[],(function(){}))),!0}catch(e){return!1}}();return function(){var n,o=d()(e);if(t){var r=d()(this).constructor;n=Reflect.construct(o,arguments,r)}else n=o.apply(this,arguments);return f()(this,n)}}var O=function(e){u()(n,e);var t=E(n);function n(e){var o;r()(this,n),o=t.call(this,e),m()(p()(o),"node",void 0);var i=e.isAppMounted,a=e.target;return o.node=null,o.state={targetIsAvailable:i&&!!Object(T.b)(a)},o}return a()(n,[{key:"componentDidMount",value:function(){this.checkTargetAvailability()}},{key:"componentDidUpdate",value:function(){this.checkTargetAvailability()}},{key:"componentWillUnmount",value:function(){var e=this.node;e&&e.parentNode.removeChild(e)}},{key:"checkTargetAvailability",value:function(){var e=this.props.target;!this.state.targetIsAvailable&&Object(T.b)(e)&&this.setState({targetIsAvailable:!0})}},{key:"renderPortal",value:function(){var e=this.props,t=e.target,n=e.createContainer,o=e.children,r=Object(T.b)(t),i=r;return n&&((i=this.node)||((i=document.createElement("div")).setAttribute("class","portal-wrapper"),r.appendChild(i),this.node=i)),i?P.a.createPortal(o,i):0}},{key:"render",value:function(){return this.state.targetIsAvailable?this.renderPortal():null}}]),n}(g.Component);m()(O,"defaultProps",{target:"body",createContainer:!0}),t.a=Object(b.a)(O)},"61np":function(e,t,n){"use strict";var o=n("pVnL"),r=n.n(o),i=n("QILm"),a=n.n(i),c=n("cDcd"),p=n("TSYQ"),s=n.n(p),u=n("cKCp");n("GSOj");t.a=function(e){var t=e.content,n=e.children,o=e.className,i=a()(e,["content","children","className"]);return c.createElement(u.a,r()({className:s()("ui-tooltip",o),popupContent:t,aliveTime:300},i),n)}},"9YLm":function(e,t,n){},CX2u:function(e,t,n){"use strict";var o=n("XKFU"),r=n("g3g5"),i=n("dyZX"),a=n("69bn"),c=n("vKrd");o(o.P+o.R,"Promise",{finally:function(e){var t=a(this,r.Promise||i.Promise),n="function"==typeof e;return this.then(n?function(n){return c(t,e()).then((function(){return n}))}:e,n?function(n){return c(t,e()).then((function(){throw n}))}:e)}})},EA6I:function(e,t,n){"use strict";n("a1Th"),n("h7Nl"),n("I5cv"),n("V+eJ");var o=n("lwsE"),r=n.n(o),i=n("W8MJ"),a=n.n(i),c=n("PJYZ"),p=n.n(c),s=n("7W2i"),u=n.n(s),l=n("a1gu"),f=n.n(l),v=n("Nsbk"),d=n.n(v),h=n("pVnL"),m=n.n(h),g=n("QILm"),y=n.n(g),P=n("lSNA"),b=n.n(P),T=n("cDcd"),E=n.n(T),O=n("TSYQ"),k=n.n(O),w=n("dvg7"),N=n.n(w),A=n("37OS"),C=n.n(A),W=n("TXrv"),R=n("3N0A");n("dcnl");function S(e){var t=function(){if("undefined"==typeof Reflect||!Reflect.construct)return!1;if(Reflect.construct.sham)return!1;if("function"==typeof Proxy)return!0;try{return Date.prototype.toString.call(Reflect.construct(Date,[],(function(){}))),!0}catch(e){return!1}}();return function(){var n,o=d()(e);if(t){var r=d()(this).constructor;n=Reflect.construct(o,arguments,r)}else n=o.apply(this,arguments);return f()(this,n)}}var D=25,M=parseInt(10,10)+parseInt(D,10)/2,L=function(e){u()(n,e);var t=S(n);function n(){var e;r()(this,n);for(var o=arguments.length,i=new Array(o),a=0;a<o;a++)i[a]=arguments[a];return e=t.call.apply(t,[this].concat(i)),b()(p()(e),"popoverElement",void 0),b()(p()(e),"popoverWrap",void 0),b()(p()(e),"popoverTip",void 0),b()(p()(e),"getNewAlignment",(function(t,n,o){var r=["top","top-right","top-left","right","left","bottom","bottom-right","bottom-left"],i=0,a=t,c=r.indexOf(t);0!==c&&(t.indexOf("-right")>0||t.indexOf("-left")>0)?c-=1:c+=1;do{if(++i===r.length)break;a=r[c%=r.length]}while(!e.checkPopoverOverflow(r[c++],n,o));return a})),b()(p()(e),"checkPopoverOverflow",(function(t,n,o){var r=e.getPopoverDimension(),i=r.popoverWrapHeight,a=r.popoverWrapWidth,c=e.getPopupCoordinates(t),p=c.left,s=c.top;return p+a>n||s+i>o||s<0||p<0})),b()(p()(e),"getPopupCoordinates",(function(t){var n,o,r=e.getPopoverDimension(),i=r.popoverWrapHeight,a=r.popoverWrapWidth,c=e.getTargetOffsets(),p=c.offsetTop,s=c.offsetLeft,u=c.offsetWidth,l=c.offsetHeight,f=e.props,v=f.popoverSpace,d=f.showTip&&u<2*M?M-u/2:0;switch(t){case"top":n=s+u/2-a/2,o=p-i-v;break;case"top-right":n=s+u-a+d,o=p-i-v;break;case"top-left":n=s-d,o=p-i-v;break;case"right":n=s+u+v,o=p+l/2-i/2;break;case"bottom":n=s+u/2-a/2,o=p+l+v;break;case"bottom-right":n=s+u-a+d,o=p+l+v;break;case"bottom-left":n=s-d,o=p+l+v;break;case"left":n=s-a-v,o=p+l/2-i/2;break;default:n=0,o=0}return{left:n,top:o}})),b()(p()(e),"positionPopover",(function(){var t=p()(e),n=t.popoverWrap,o=t.popoverTip,r=t.props,i=r.open,a=r.target,c=r.align,s=r.coordinate,u=r.showTip;if(i){var l,f,v=e.getContainmentDimension(),d=v.containmentWidth,h=v.containmentHeight;s?Object(W.c)(n,s):a&&(e.checkPopoverOverflow(c,d,h)?(l=e.getNewAlignment(c,d,h),f=e.getPopupCoordinates(l),u&&(o.classList.remove("align-tip-".concat(c)),o.classList.add("align-tip-".concat(l))),n.classList.remove("align-popover-".concat(c)),n.classList.add("align-popover-".concat(l))):f=e.getPopupCoordinates(c),Object(W.c)(n,{left:"".concat(f.left,"px"),top:"".concat(f.top,"px")}))}})),e}return a()(n,[{key:"componentDidMount",value:function(){this.positionPopover(),window.addEventListener("resize",this.positionPopover)}},{key:"shouldComponentUpdate",value:function(e){var t=this.props;return e.open!==t.open||e.children!==t.children}},{key:"componentDidUpdate",value:function(){this.positionPopover()}},{key:"componentWillUnmount",value:function(){window.removeEventListener("resize",this.positionPopover)}},{key:"getPopoverDimension",value:function(){var e=this.popoverWrap,t=e.offsetWidth;return{popoverWrapHeight:e.offsetHeight,popoverWrapWidth:t}}},{key:"getContainmentDimension",value:function(){return{containmentWidth:window.innerWidth,containmentHeight:document.documentElement.scrollHeight}}},{key:"getTargetOffsets",value:function(){var e=this.props.target,t=Object(W.a)(e),n=t.top,o=t.left,r=e.getBoundingClientRect();return{offsetTop:n,offsetLeft:o,offsetWidth:r.width,offsetHeight:r.height}}},{key:"render",value:function(){var e=this,t=this.props,n=t.target,o=t.coordinate,r=t.align,i=t.showTip,a=t.open,c=t.className,p=t.onClose,s=(t.popoverSpace,y()(t,["target","coordinate","align","showTip","open","className","onClose","popoverSpace"]));return a&&(n||o)?E.a.createElement(R.a,null,E.a.createElement(N.a,{onClickOutside:p},E.a.createElement("div",{className:k()("custom-popover",c),ref:function(t){e.popoverElement=t}},E.a.createElement("div",m()({ref:function(t){e.popoverWrap=t},className:k()("popover-wrap","align-popover-".concat(r),{"has-tip":i})},s),E.a.createElement("div",{className:"content"},this.props.children),i&&E.a.createElement("div",{ref:function(t){e.popoverTip=t},className:k()("tip","align-tip-".concat(r))}))))):null}}]),n}(T.Component);b()(L,"defaultProps",{align:"top",showTip:!0,open:!1,popoverSpace:15,onClose:C.a}),t.a=L},GSOj:function(e,t,n){},TXrv:function(e,t,n){"use strict";n.d(t,"b",(function(){return i})),n.d(t,"c",(function(){return a})),n.d(t,"a",(function(){return c}));n("91GP");var o=n("lSNA"),r=n.n(o);function i(e){return"string"==typeof e?document.querySelector(e):e}function a(e,t,n){var o="string"==typeof t?r()({},t,n):t;Object.assign(e.style,o)}function c(e){var t=document.body,n=document.documentElement,o=t.scrollTop||n.scrollTop,r=t.scrollLeft||n.scrollLeft,i=e.getBoundingClientRect();return{top:i.top+o,left:i.left+r}}},cKCp:function(e,t,n){"use strict";n("a1Th"),n("h7Nl"),n("I5cv"),n("bWfx"),n("2Spj");var o=n("lSNA"),r=n.n(o),i=n("lwsE"),a=n.n(i),c=n("W8MJ"),p=n.n(c),s=n("PJYZ"),u=n.n(s),l=n("7W2i"),f=n.n(l),v=n("a1gu"),d=n.n(v),h=n("Nsbk"),m=n.n(h),g=n("pVnL"),y=n.n(g),P=n("QILm"),b=n.n(P),T=n("cDcd"),E=n.n(T),O=n("TSYQ"),k=n.n(O),w=n("EA6I"),N=n("FLdU");n("9YLm");function A(e){var t=function(){if("undefined"==typeof Reflect||!Reflect.construct)return!1;if(Reflect.construct.sham)return!1;if("function"==typeof Proxy)return!0;try{return Date.prototype.toString.call(Reflect.construct(Date,[],(function(){}))),!0}catch(e){return!1}}();return function(){var n,o=m()(e);if(t){var r=m()(this).constructor;n=Reflect.construct(o,arguments,r)}else n=o.apply(this,arguments);return d()(this,n)}}function C(){}var W=Object(N.a)(),R=function(e){f()(n,e);var t=A(n);function n(){var e;return a()(this,n),e=t.call(this),r()(u()(e),"popoverTimeout",void 0),r()(u()(e),"delayTimeout",void 0),r()(u()(e),"clearTimeouts",(function(){e.popoverTimeout&&clearTimeout(e.popoverTimeout),e.delayTimeout&&clearTimeout(e.delayTimeout)})),r()(u()(e),"getEventTypes",(function(){var t=e.props.eventType;return{showEvent:"hover"===t?"onMouseEnter":"onFocus",hideEvent:"hover"===t?"onMouseLeave":"onBlur"}})),r()(u()(e),"onAnyPopupOpen",(function(t){t!==e.state.target&&e.state.target&&(e.clearTimeouts(),e.setState({popoverOpen:!1,target:void 0}))})),r()(u()(e),"setPopoverOpen",(function(t){var n=e.props.onPopupOpen;e.setState(t,(function(){W.emit("onUIHoverPopupOpen",e.state.target),n()}))})),r()(u()(e),"openPopover",(function(t,n){var o=e.props,r=o.disabled,i=o.delay,a=e.state.popoverOpen;if(e.clearTimeouts(),!a&&!r){var c={popoverOpen:!0};n&&(c.target=t.currentTarget),i?e.delayTimeout=setTimeout((function(){return e.setPopoverOpen(c)}),i):e.setPopoverOpen(c)}})),r()(u()(e),"closePopover",(function(){var t=e.props,n=t.aliveTime,o=t.onPopupClose;e.clearTimeouts(),e.popoverTimeout=setTimeout((function(){e.setState({popoverOpen:!1,target:void 0},(function(){return o()}))}),n)})),r()(u()(e),"bindTriggerEvents",(function(t){var n,o=e.getEventTypes(),i=o.showEvent,a=o.hideEvent;return E.a.cloneElement(t,(n={},r()(n,i,(function(n){e.openPopover(n,!0),t.props[i]&&t.props[i](n)})),r()(n,a,(function(n){e.closePopover(),t.props[a]&&t.props[a](n)})),n))})),e.state={popoverOpen:!1},e}return p()(n,[{key:"componentDidMount",value:function(){W.on("onUIHoverPopupOpen",this.onAnyPopupOpen)}},{key:"componentWillUnmount",value:function(){W.off("onUIHoverPopupOpen",this.onAnyPopupOpen),this.clearTimeouts()}},{key:"renderPopover",value:function(){var e,t=this.props,n=this.state,o=t.popupContent,r=t.className,i=t.eventType,a=(t.aliveTime,t.onPopupOpen,t.onPopupClose,t.delay,t.disabled),c=b()(t,["popupContent","className","eventType","aliveTime","onPopupOpen","onPopupClose","delay","disabled"]),p=n.target;if(!a){e="function"==typeof o?o():o;var s={};return"hover"===i&&(s={onMouseEnter:this.openPopover.bind(this,!1),onMouseLeave:this.closePopover}),E.a.createElement(w.a,y()({},c,{className:k()("hover-popup",r),open:!0},s,{target:p}),e)}}},{key:"render",value:function(){var e=this.state.popoverOpen,t=this.props.children,n=E.a.Children.map(t,this.bindTriggerEvents);return E.a.createElement(T.Fragment,null,n,e&&this.renderPopover())}}]),n}(T.Component);r()(R,"defaultProps",{aliveTime:1e3,onPopupOpen:C,onPopupClose:C,disabled:!1,eventType:"hover"}),t.a=R},dcnl:function(e,t,n){},ufwU:function(e,t,n){}}]);
//# sourceMappingURL=https://hrcdn.net/community-frontend/assets/sourcemaps/vendors~hackerrank_r_community~hackerrank_r_work~hackerrank_r_work_login-e51750613b.js.map