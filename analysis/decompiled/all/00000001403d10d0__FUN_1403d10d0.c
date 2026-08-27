// Function: FUN_1403d10d0
// Addr: 1403d10d0
// Size: 504 bytes


void FUN_1403d10d0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined1 local_108 [40];
  undefined1 local_e0 [48];
  longlong local_b0;
  undefined8 *local_a0;
  longlong local_78;
  
  puVar5 = (undefined8 *)FUN_1403c5570(*(longlong *)(param_2 + 0x20) + 0x168);
  FUN_140394860(local_108,param_1,param_2,param_3,*puVar5);
  cVar4 = FUN_1403ec530(param_3,param_2,"start table kerx");
  if (cVar4 != '\0') {
    local_78 = FUN_1403bc830(puVar5 + 4);
    lVar2 = *(longlong *)(param_2 + 0x20);
    puVar9 = &DAT_14045dd10;
    piVar8 = *(int **)(lVar2 + 0x170);
    while (piVar8 == (int *)0x0) {
      if (*(longlong *)(lVar2 + 0x70) == 0) {
        piVar8 = (int *)&DAT_14045dd10;
        break;
      }
      piVar6 = (int *)FUN_1403b8950();
      piVar8 = (int *)&DAT_14045dd10;
      if (piVar6 != (int *)0x0) {
        piVar8 = piVar6;
      }
      LOCK();
      bVar10 = *(longlong *)(lVar2 + 0x170) == 0;
      if (bVar10) {
        *(longlong *)(lVar2 + 0x170) = (longlong)piVar8;
      }
      UNLOCK();
      if (bVar10) break;
      if (((piVar8 != (int *)0x0) && (piVar8 != (int *)&DAT_14045dd10)) && (*piVar8 != 0)) {
        LOCK();
        iVar1 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          *piVar8 = -0xdead;
          lVar3 = *(longlong *)(piVar8 + 2);
          if (lVar3 != 0) {
            FUN_1403c3220(lVar3);
            thunk_FUN_1402d9040(lVar3);
            piVar8[2] = 0;
            piVar8[3] = 0;
          }
          if (*(code **)(piVar8 + 10) != (code *)0x0) {
            (**(code **)(piVar8 + 10))(*(undefined8 *)(piVar8 + 8));
            piVar8[8] = 0;
            piVar8[9] = 0;
            piVar8[10] = 0;
            piVar8[0xb] = 0;
          }
          thunk_FUN_1402d9040(piVar8);
        }
      }
      piVar8 = *(int **)(lVar2 + 0x170);
    }
    local_a0 = &DAT_14045dd10;
    if (0xb < (uint)piVar8[6]) {
      local_a0 = *(undefined8 **)(piVar8 + 4);
    }
    puVar7 = &DAT_14045dd10;
    if ((undefined8 *)*puVar5 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)*puVar5;
    }
    if (7 < *(uint *)(puVar7 + 3)) {
      puVar9 = (undefined8 *)puVar7[2];
    }
    FUN_1403a7310(puVar9,local_108,puVar5 + 1);
    lVar2 = local_78;
    if (local_78 != 0) {
      LOCK();
      bVar10 = puVar5[4] == 0;
      if (bVar10) {
        puVar5[4] = local_78;
      }
      UNLOCK();
      if (!bVar10) {
        FUN_1403c29e0(local_78);
        thunk_FUN_1402d9040(lVar2);
      }
    }
    local_78 = 0;
    FUN_1403ec530(param_3,param_2,"end table kerx");
  }
  FUN_1403beff0(local_e0);
  if (local_b0 != 0) {
    FUN_1403beff0(local_e0);
  }
  return;
}

