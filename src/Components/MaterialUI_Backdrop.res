@react.component @module("@material-ui/core/Backdrop")
external make: (
  ~id: string=?,
  ~children: React.element=?,
  ~className: string=?,
  ~invisible: bool=?,
  ~_open: bool=?,
  ~onClick: unit => unit=?,
  ~transitionDuration: int=?,
) => /* transitionDuration can be shape */
React.element = "default"
