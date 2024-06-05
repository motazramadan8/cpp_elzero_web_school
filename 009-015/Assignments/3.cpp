/*
  name        [ Valid | Good Practice ]
  NAME        [ Valid | Bad Practice ]
  1name       [ Not Valid ] => Starts with number
  __name      [ Valid | Bad Practice ] => Reason ?
  name@name   [ Not Valid ] => Contains special character
  name10name  [ Valid | Bad Practice ] => Reason ?
  name!name   [ Not Valid ] => Contains special character
  first_NAME  [ Valid | Bad Practice ] => Reason ?
  first_name  [ Valid | Good Practice ] => snake_case
  firstName   [ Valid | Good Practice ] => camelCase
  first name  [ Not Valid ] => Contains whitespace
  fn          [ Not Valid ] => Reserved word
  public      [ Not Valid ] => Reserved word
  Public      [ Not Valid ] => Reserved word
*/