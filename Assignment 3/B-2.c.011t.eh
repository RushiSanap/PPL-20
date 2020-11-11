
;; Function main (main, funcdef_no=0, decl_uid=1911, cgraph_uid=1, symbol_order=1)

main ()
{
  int a;
  int i;
  int D.1919;

  a = 10;
  i = 0;
  goto <D.1916>;
  <D.1915>:
  N.0_1 = N;
  a = a + N.0_1;
  i = i + 1;
  <D.1916>:
  if (i <= 3) goto <D.1915>; else goto <D.1917>;
  <D.1917>:
  D.1919 = a;
  goto <D.1920>;
  D.1919 = 0;
  goto <D.1920>;
  <D.1920>:
  return D.1919;
}


