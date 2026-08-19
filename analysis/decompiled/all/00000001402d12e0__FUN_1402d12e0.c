// Function: FUN_1402d12e0
// Addr: 1402d12e0
// Size: 175 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1402d12e0(int param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  char *pcVar5;
  longlong *plStackX_10;
  longlong local_res18;
  undefined8 local_res20;
  
  if (param_1 != 0) {
    if (1 < param_1 - 1U) {
                    /* WARNING: Subroutine does not return */
      FUN_1402cb004();
    }
    func_0x0001402e346c();
    FUN_1402decf4(0,&DAT_1404e4540,0x104);
    _DAT_1404e4f70 = &DAT_1404e4540;
    if ((DAT_1404e4f90 == (char *)0x0) || (pcVar5 = DAT_1404e4f90, *DAT_1404e4f90 == '\0')) {
      pcVar5 = &DAT_1404e4540;
    }
    local_res18 = 0;
    local_res20 = 0;
    FUN_1402d10c0(pcVar5,0,0,&local_res18,&local_res20);
    lVar1 = local_res18;
    plVar3 = (longlong *)FUN_1402d1280(local_res18,local_res20,1);
    if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402cb004();
    }
    FUN_1402d10c0(pcVar5,plVar3,plVar3 + lVar1,&local_res18,&local_res20);
    if (param_1 == 1) {
      iRam00000001404e4f78 = (int)local_res18 + -1;
      plVar4 = (longlong *)0x0;
      plRam00000001404e4f80 = plVar3;
    }
    else {
      plStackX_10 = (longlong *)0x0;
      iVar2 = func_0x0001402e2c5c(plVar3,&plStackX_10);
      plVar4 = plStackX_10;
      if (iVar2 != 0) {
        FUN_1402d9110(plStackX_10);
        plStackX_10 = (longlong *)0x0;
        FUN_1402d9110(plVar3);
        return iVar2;
      }
      iRam00000001404e4f78 = 0;
      lVar1 = *plStackX_10;
      while (lVar1 != 0) {
        plStackX_10 = plStackX_10 + 1;
        iRam00000001404e4f78 = iRam00000001404e4f78 + 1;
        lVar1 = *plStackX_10;
      }
      plStackX_10 = (longlong *)0x0;
      plRam00000001404e4f80 = plVar4;
      FUN_1402d9110(0);
      plStackX_10 = (longlong *)0x0;
      plVar4 = plVar3;
    }
    FUN_1402d9110(plVar4);
  }
  return 0;
}

