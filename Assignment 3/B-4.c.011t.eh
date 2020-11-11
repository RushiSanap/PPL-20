
;; Function main (main, funcdef_no=0, decl_uid=1910, cgraph_uid=1, symbol_order=0)

main ()
{
  int c;
  int b;
  int a;
  int D.1916;

  _1 = a + c;
  _2 = b + _1;
  _3 = c + a;
  b = _2 * _3;
  D.1916 = b;
  goto <D.1917>;
  D.1916 = 0;
  goto <D.1917>;
  <D.1917>:
  return D.1916;
}


