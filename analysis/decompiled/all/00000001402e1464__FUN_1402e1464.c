// Function: FUN_1402e1464
// Addr: 1402e1464
// Size: 142 bytes


ulonglong FUN_1402e1464(undefined8 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  if (((*(uint *)((longlong)param_1 + 0x14) >> 0xd & 1) != 0) &&
     ((*(uint *)((longlong)param_1 + 0x14) >> 0xc & 1) == 0)) {
    if ((*(uint *)((longlong)param_1 + 0x14) >> 1 & 1) == 0) {
      LOCK();
      *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 1;
      UNLOCK();
      if ((*(uint *)((longlong)param_1 + 0x14) & 0x4c0) == 0) {
        func_0x0001402e15d0();
      }
      uVar3 = param_1[1];
      uVar2 = *(undefined4 *)(param_1 + 4);
      *param_1 = uVar3;
      uVar4 = FUN_1402db68c(param_1);
      iVar5 = func_0x0001402e0ee4(uVar4,uVar3,uVar2);
      *(int *)(param_1 + 2) = iVar5;
      if (1 < iVar5 + 1U) {
        if ((*(uint *)((longlong)param_1 + 0x14) & 6) == 0) {
          iVar5 = FUN_1402db68c(param_1);
          if ((iVar5 == -1) || (iVar5 = FUN_1402db68c(param_1), iVar5 == -2)) {
            puVar7 = &DAT_1404dc7d0;
          }
          else {
            iVar5 = FUN_1402db68c(param_1);
            uVar6 = FUN_1402db68c(param_1);
            puVar7 = (undefined *)
                     (*(longlong *)(&DAT_1404e4960 + ((longlong)iVar5 >> 6) * 8) +
                     (ulonglong)(uVar6 & 0x3f) * 0x48);
          }
          if ((puVar7[0x38] & 0x82) == 0x82) {
            LOCK();
            *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x20;
            UNLOCK();
          }
        }
        if (((*(int *)(param_1 + 4) == 0x200) &&
            ((*(uint *)((longlong)param_1 + 0x14) >> 6 & 1) != 0)) &&
           ((*(uint *)((longlong)param_1 + 0x14) >> 8 & 1) == 0)) {
          *(undefined4 *)(param_1 + 4) = 0x1000;
        }
        *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + -1;
        bVar1 = *(byte *)*param_1;
        *param_1 = (byte *)*param_1 + 1;
        return (ulonglong)bVar1;
      }
      LOCK();
      *(uint *)((longlong)param_1 + 0x14) =
           *(uint *)((longlong)param_1 + 0x14) | (-(uint)(iVar5 != 0) & 8) + 8;
      UNLOCK();
      *(undefined4 *)(param_1 + 2) = 0;
    }
    else {
      LOCK();
      *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x10;
      UNLOCK();
    }
  }
  return 0xffffffff;
}

