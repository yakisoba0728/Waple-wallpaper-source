// Function: FUN_140066790
// Addr: 140066790
// Size: 512 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140066790(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  bool bVar4;
  longlong *local_res8;
  longlong local_res10;
  undefined8 local_res18;
  longlong *local_res20;
  
  local_res8 = param_1;
  func_0x00014000d730(&DAT_1404e8bb0);
  plVar2 = DAT_1404e5400;
  bVar4 = DAT_1404e5408 != 0;
  plVar1 = (longlong *)*DAT_1404e5400;
  uVar3 = 0;
  local_res8 = (longlong *)CONCAT71(local_res8._1_7_,bVar4);
  local_res20 = DAT_1404e5400;
  for (; plVar1 != plVar2; plVar1 = (longlong *)*plVar1) {
    if ((longlong *)plVar1[6] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar1[6] + 0x18))();
      plVar1[6] = 0;
    }
  }
  local_res20 = DAT_1404e5400;
  if (DAT_1404e5408 != 0) {
    if (DAT_1404e5408 < DAT_1404e5430 >> 3) {
      plVar1 = (longlong *)*DAT_1404e5400;
      if (plVar1 != DAT_1404e5400) {
        local_res10 = plVar1[1];
        if (plVar1[4] != 0) {
          do {
            uVar3 = uVar3 + 1;
          } while (uVar3 < (ulonglong)plVar1[4]);
        }
        local_res18 = DAT_1404e5410;
                    /* WARNING: Subroutine does not return */
        FUN_140017310(plVar1 + 0x18);
      }
    }
    else {
      func_0x0001400356c0(DAT_1404e5408,DAT_1404e5400);
      *DAT_1404e5400 = (longlong)DAT_1404e5400;
      DAT_1404e5400[1] = (longlong)DAT_1404e5400;
      local_res8 = DAT_1404e5400;
      DAT_1404e5408 = 0;
      func_0x00014000f8a0(DAT_1404e5410,DAT_1404e5418,&local_res8);
    }
  }
  FUN_14006e190();
  FUN_14006e7a0();
  if ((DAT_1404e53b4 >> 0x14 & 1) != 0) {
    func_0x000140074e70();
  }
  return bVar4;
}

