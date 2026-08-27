// Function: FUN_140099310
// Addr: 140099310
// Size: 1114 bytes


void FUN_140099310(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong local_res8;
  longlong local_res10;
  longlong *local_res18;
  
  iVar8 = 0;
  if (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x10))();
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  if (*(longlong **)(param_1 + 200) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 200) + 0x10))();
    *(undefined8 *)(param_1 + 200) = 0;
  }
  if (*(longlong **)(param_1 + 0xd0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x10))();
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  if (*(longlong **)(param_1 + 0x108) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x108) + 0x10))();
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  if (*(longlong **)(param_1 + 0xf0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x10))();
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  if (*(longlong **)(param_1 + 0x110) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x110) + 0x10))();
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  if (*(longlong **)(param_1 + 0xf8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x10))();
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  if (*(longlong **)(param_1 + 0x118) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x118) + 0x10))();
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  lVar6 = *(longlong *)(param_1 + 0x140);
  if (*(longlong *)(param_1 + 0x148) - lVar6 >> 3 != 0) {
    do {
      plVar1 = *(longlong **)(lVar6 + (longlong)iVar8 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
        *(undefined8 *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar8 * 8) = 0;
      }
      lVar6 = *(longlong *)(param_1 + 0x140);
      iVar8 = iVar8 + 1;
    } while ((ulonglong)(longlong)iVar8 < (ulonglong)(*(longlong *)(param_1 + 0x148) - lVar6 >> 3));
  }
  if (lVar6 != *(longlong *)(param_1 + 0x148)) {
    *(longlong *)(param_1 + 0x148) = lVar6;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x80);
  for (puVar3 = (undefined8 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined8 *)*puVar3) {
    if ((longlong *)puVar3[3] != (longlong *)0x0) {
      (**(code **)(*(longlong *)puVar3[3] + 0x10))();
      puVar3[3] = 0;
    }
  }
  if (*(ulonglong *)(param_1 + 0x88) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x80);
    if (*(ulonglong *)(param_1 + 0x88) < *(ulonglong *)(param_1 + 0xb0) >> 3) {
      plVar4 = (longlong *)*plVar1;
      if (plVar4 != plVar1) {
        local_res10 = *(longlong *)(param_1 + 0x90);
        plVar5 = (longlong *)plVar4[1];
        lVar6 = (*(ulonglong *)(param_1 + 0xa8) &
                (((((ulonglong)*(byte *)(plVar4 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar4 + 0x11)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar4 + 0x12)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar4 + 0x13)) * 0x100000001b3) * 0x10;
        local_res18 = (longlong *)(local_res10 + 8 + lVar6);
        plVar11 = (longlong *)(lVar6 + local_res10);
        local_res8 = *(longlong *)(lVar6 + local_res10);
        plVar7 = (longlong *)*local_res18;
        plVar9 = plVar4;
LAB_140099570:
        plVar10 = (longlong *)*plVar9;
        thunk_FUN_14028af80(plVar9,0x20);
        *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + -1;
        if (plVar9 != plVar7) goto code_r0x000140099593;
        plVar7 = plVar5;
        if ((longlong *)local_res8 == plVar4) {
          *plVar11 = (longlong)plVar1;
          plVar7 = plVar1;
        }
        *local_res18 = (longlong)plVar7;
        while (plVar10 != plVar1) {
          uVar12 = *(ulonglong *)(param_1 + 0xa8) &
                   (((((ulonglong)*(byte *)(plVar10 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar10 + 0x11)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar10 + 0x12)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar10 + 0x13)) * 0x100000001b3;
          plVar4 = *(longlong **)(local_res10 + 8 + uVar12 * 0x10);
          plVar11 = (longlong *)(local_res10 + uVar12 * 0x10);
          plVar7 = plVar10;
          while( true ) {
            plVar10 = (longlong *)*plVar7;
            thunk_FUN_14028af80(plVar7,0x20);
            *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + -1;
            if (plVar7 == plVar4) break;
            plVar7 = plVar10;
            if (plVar10 == plVar1) goto LAB_14009959f;
          }
          *plVar11 = (longlong)plVar1;
          *(longlong **)(local_res10 + 8 + uVar12 * 0x10) = plVar1;
        }
        goto LAB_1400995a3;
      }
    }
    else {
      *(undefined8 *)plVar1[1] = 0;
      puVar2 = (undefined8 *)*plVar1;
      while (puVar2 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)*puVar2;
        thunk_FUN_14028af80(puVar2,0x20);
        puVar2 = puVar3;
      }
      *(undefined8 *)*(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x80);
      *(longlong *)(*(longlong *)(param_1 + 0x80) + 8) = *(longlong *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x88) = 0;
      local_res8 = *(longlong *)(param_1 + 0x80);
      FUN_14000f7d0(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98),&local_res8);
    }
  }
LAB_1400995b2:
  puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x70) + 0x20);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (*(longlong **)(param_1 + 0x130) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x130) + 0x10))();
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  if (*(longlong **)(param_1 + 0x138) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x138) + 0x10))();
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  return;
code_r0x000140099593:
  plVar9 = plVar10;
  if (plVar10 == plVar1) goto code_r0x000140099598;
  goto LAB_140099570;
code_r0x000140099598:
  if ((longlong *)local_res8 == plVar4) {
LAB_14009959f:
    *plVar11 = (longlong)plVar10;
  }
LAB_1400995a3:
  *plVar5 = (longlong)plVar10;
  plVar10[1] = (longlong)plVar5;
  goto LAB_1400995b2;
}

