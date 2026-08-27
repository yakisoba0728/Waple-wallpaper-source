// Function: FUN_1402dcaf0
// Addr: 1402dcaf0
// Size: 66 bytes


bool FUN_1402dcaf0(void)

{
  longlong lVar1;
  bool bVar2;
  
  if (DAT_140516018 == -1) {
    lVar1 = 0;
  }
  else {
    bVar2 = DAT_140516018 == 0;
    if (!bVar2) goto LAB_1402dcb2a;
    lVar1 = FUN_1402dbc10(3,"FlsGetValue2",&DAT_14042ffd8,"FlsGetValue2");
  }
  bVar2 = lVar1 == 0;
LAB_1402dcb2a:
  return !bVar2;
}

