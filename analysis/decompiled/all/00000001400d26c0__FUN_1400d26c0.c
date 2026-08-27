// Function: FUN_1400d26c0
// Addr: 1400d26c0
// Size: 847 bytes


void FUN_1400d26c0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  longlong *local_res8;
  longlong *local_res10;
  longlong *local_res18;
  longlong local_res20;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (*(ulonglong *)(lVar1 + 0x10) != 0)) {
    plVar2 = *(longlong **)(lVar1 + 8);
    if (*(ulonglong *)(lVar1 + 0x10) < *(ulonglong *)(lVar1 + 0x38) >> 3) {
      plVar3 = (longlong *)*plVar2;
      if (plVar3 != plVar2) {
        local_res8 = (longlong *)plVar3[1];
        local_res20 = *(longlong *)(lVar1 + 0x18);
        lVar7 = (*(ulonglong *)(lVar1 + 0x30) &
                (((((ulonglong)*(byte *)(plVar3 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar3 + 0x11)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar3 + 0x12)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar3 + 0x13)) * 0x100000001b3) * 0x10;
        plVar9 = (longlong *)(local_res20 + 8 + lVar7);
        local_res18 = (longlong *)(lVar7 + local_res20);
        local_res10 = *(longlong **)(lVar7 + local_res20);
        plVar8 = (longlong *)*plVar9;
        plVar10 = plVar3;
        while( true ) {
          plVar11 = (longlong *)*plVar10;
          plVar4 = (longlong *)plVar10[10];
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x20))(plVar4,plVar4 != plVar10 + 3);
            plVar10[10] = 0;
          }
          thunk_FUN_14028af80(plVar10,0x58);
          *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -1;
          if (plVar10 == plVar8) break;
          plVar10 = plVar11;
          if (plVar11 == plVar2) {
            bVar12 = local_res10 == plVar3;
            local_res10 = local_res18;
            if (bVar12) {
LAB_1400d281c:
              *local_res10 = (longlong)plVar11;
            }
LAB_1400d281f:
            *local_res8 = (longlong)plVar11;
            plVar11[1] = (longlong)local_res8;
            return;
          }
        }
        plVar8 = local_res8;
        if (local_res10 == plVar3) {
          *local_res18 = (longlong)plVar2;
          plVar8 = plVar2;
        }
        *plVar9 = (longlong)plVar8;
        while (plVar11 != plVar2) {
          local_res18 = (longlong *)
                        ((*(ulonglong *)(lVar1 + 0x30) &
                         (((((ulonglong)*(byte *)(plVar11 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3
                           ^ (ulonglong)*(byte *)((longlong)plVar11 + 0x11)) * 0x100000001b3 ^
                          (ulonglong)*(byte *)((longlong)plVar11 + 0x12)) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)plVar11 + 0x13)) * 0x100000001b3) * 0x10);
          plVar3 = *(longlong **)(local_res20 + 8 + (longlong)local_res18);
          local_res10 = (longlong *)((longlong)local_res18 + local_res20);
          plVar8 = plVar11;
          while( true ) {
            plVar11 = (longlong *)*plVar8;
            plVar10 = (longlong *)plVar8[10];
            if (plVar10 != (longlong *)0x0) {
              (**(code **)(*plVar10 + 0x20))(plVar10,plVar10 != plVar8 + 3);
              plVar8[10] = 0;
            }
            thunk_FUN_14028af80(plVar8,0x58);
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -1;
            if (plVar8 == plVar3) break;
            plVar8 = plVar11;
            if (plVar11 == plVar2) goto LAB_1400d281c;
          }
          *local_res10 = (longlong)plVar2;
          *(longlong **)(local_res20 + 8 + (longlong)local_res18) = plVar2;
        }
        goto LAB_1400d281f;
      }
    }
    else {
      *(undefined8 *)plVar2[1] = 0;
      puVar6 = (undefined8 *)*plVar2;
      while (puVar6 != (undefined8 *)0x0) {
        plVar2 = (longlong *)puVar6[10];
        puVar5 = (undefined8 *)*puVar6;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != puVar6 + 3);
          puVar6[10] = 0;
        }
        thunk_FUN_14028af80(puVar6,0x58);
        puVar6 = puVar5;
      }
      *(undefined8 *)*(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar1 + 8);
      *(longlong *)(*(longlong *)(lVar1 + 8) + 8) = *(longlong *)(lVar1 + 8);
      *(undefined8 *)(lVar1 + 0x10) = 0;
      local_res8 = *(longlong **)(lVar1 + 8);
      FUN_14000f7d0(*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20),&local_res8);
    }
  }
  return;
}

