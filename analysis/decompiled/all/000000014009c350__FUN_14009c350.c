// Function: FUN_14009c350
// Addr: 14009c350
// Size: 380 bytes


void FUN_14009c350(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar3 = FUN_140290d80(param_1 + 0xf);
  if (iVar3 == 0) {
    if (*(int *)((longlong)param_1 + 0xc4) == 0x7fffffff) {
      *(undefined4 *)((longlong)param_1 + 0xc4) = 0x7ffffffe;
LAB_14009c4b0:
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(6);
    }
    if ((char)param_1[0x35] == '\0') {
      iVar3 = FUN_140290d80(param_1 + 0x19);
      if (iVar3 != 0) goto LAB_14009c49b;
      if (*(int *)((longlong)param_1 + 0x114) == 0x7fffffff) {
        *(undefined4 *)((longlong)param_1 + 0x114) = 0x7ffffffe;
        goto LAB_14009c4b0;
      }
      *(undefined1 *)(param_1 + 0x35) = 1;
      FUN_140290ed0(param_1 + 0x23);
      FUN_140290ea0(param_1 + 0x19);
      puVar1 = (undefined8 *)param_1[1];
      for (puVar6 = (undefined8 *)*param_1; puVar6 != puVar1; puVar6 = puVar6 + 2) {
        if (*(int *)(puVar6 + 1) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140290d30(1);
        }
        DVar4 = GetCurrentThreadId();
        if (*(DWORD *)(puVar6 + 1) == DVar4) goto LAB_14009c49b;
        local_38 = *(undefined4 *)puVar6;
        uStack_34 = *(undefined4 *)((longlong)puVar6 + 4);
        uStack_30 = *(undefined4 *)(puVar6 + 1);
        uStack_2c = *(undefined4 *)((longlong)puVar6 + 0xc);
        iVar3 = FUN_140291150(&local_38,0);
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140290d30(2);
        }
        *puVar6 = 0;
        puVar6[1] = 0;
      }
      lVar2 = *param_1;
      lVar5 = lVar2;
      if (lVar2 != param_1[1]) {
        do {
          if (*(int *)(lVar5 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_140015110();
          }
          lVar5 = lVar5 + 0x10;
        } while (lVar5 != param_1[1]);
        param_1[1] = lVar2;
      }
    }
    FUN_140290ea0(param_1 + 0xf);
    FUN_14000d9e0(param_1 + 0x30);
    FUN_140049340(param_1 + 0x2e);
    FUN_14000d9e0(param_1 + 9);
    FUN_140049340(param_1 + 7);
    FUN_1400ca630(param_1 + 3);
    FUN_1400ca5a0(param_1);
    return;
  }
LAB_14009c49b:
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(5);
}

