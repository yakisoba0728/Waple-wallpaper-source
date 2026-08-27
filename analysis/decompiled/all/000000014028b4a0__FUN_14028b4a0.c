// Function: FUN_14028b4a0
// Addr: 14028b4a0
// Size: 182 bytes


void FUN_14028b4a0(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  
  FUN_1402d1f08(2);
  iVar4 = FUN_14028be00();
  _set_fmode(iVar4);
  uVar5 = FUN_14000ec40();
  puVar2 = (undefined4 *)FUN_1402d3b1c();
  *puVar2 = uVar5;
  cVar3 = FUN_14028b270(1);
  if (cVar3 != '\0') {
    FUN_14028be80();
    FUN_14028b410(FUN_14028bed0);
    uVar5 = FUN_140050790();
    iVar4 = FUN_1402d1210(uVar5);
    if (iVar4 == 0) {
      FUN_14028be10();
      iVar4 = FUN_14028be50();
      if (iVar4 != 0) {
        FUN_1402d1f70(FUN_14000ec40);
      }
      _guard_check_icall();
      _guard_check_icall();
      iVar4 = FUN_14000ec40();
      _configthreadlocale(iVar4);
      cVar3 = FUN_14004bf50();
      if (cVar3 != '\0') {
        thunk_FUN_1402d1390();
      }
      FUN_14000ec40();
      iVar4 = thunk_FUN_14000ec40();
      if (iVar4 == 0) {
        return;
      }
    }
  }
  FUN_14028bbf0(7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

