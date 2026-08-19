// Function: FUN_1403d1880
// Addr: 1403d1880
// Size: 10 bytes


void FUN_1403d1880(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  bool bVar2;
  undefined1 auStack_58 [40];
  undefined1 auStack_30 [2];
  short sStack_2e;
  short sStack_2c;
  short sStack_2a;
  ulonglong uStack_18;
  
  uStack_18 = DAT_1404dc110 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0xb8);
  while ((plVar1 == (longlong *)0x0 &&
         (plVar1 = (longlong *)0x0, *(longlong *)(param_1 + 0xa8) != 0))) {
    plVar1 = (longlong *)func_0x000140413bb0();
    LOCK();
    bVar2 = *(longlong *)(param_1 + 0xb8) == 0;
    if (bVar2) {
      *(longlong *)(param_1 + 0xb8) = (longlong)plVar1;
    }
    UNLOCK();
    if (bVar2) break;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
    plVar1 = *(longlong **)(param_1 + 0xb8);
  }
  (**(code **)(*plVar1 + 0x40))(plVar1,auStack_30);
  *param_3 = (int)((ulonglong)((longlong)sStack_2e * *(longlong *)(param_1 + 0x60) + 0x8000) >> 0x10
                  );
  param_3[1] = -(int)((ulonglong)((longlong)sStack_2c * *(longlong *)(param_1 + 0x60) + 0x8000) >>
                     0x10);
  param_3[2] = (int)((ulonglong)((longlong)sStack_2a * *(longlong *)(param_1 + 0x60) + 0x8000) >>
                    0x10);
  func_0x0001402ed2f0(uStack_18 ^ (ulonglong)auStack_58);
  return;
}

