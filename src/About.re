/**
 * Not Used, just for an example.
 * This is Stateless Functional Component equivalent that is just for CSS.
 */
module HomeNew = {
  include ReactRe.Component;
  let name = "HomeNew";
  type props = unit;
  let render _ =>
    <div> (ReactRe.stringToElement "About") </div>;
};

include ReactRe.CreateComponent HomeNew;

let createElement = wrapProps ()