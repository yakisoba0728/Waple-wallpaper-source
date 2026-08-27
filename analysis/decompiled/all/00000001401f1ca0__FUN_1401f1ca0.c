// Function: FUN_1401f1ca0
// Addr: 1401f1ca0
// Size: 669 bytes


void FUN_1401f1ca0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 local_res8;
  undefined1 local_38 [16];
  
  lVar2 = *(longlong *)(param_1 + 200);
  local_res8 = 0;
  lVar8 = *(longlong *)(lVar2 + 0x2c0);
  if (*(longlong *)(lVar2 + 0x2c8) - lVar8 >> 3 != 0) {
    do {
      uVar11 = local_res8;
      uVar12 = ((ulonglong)(local_res8 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3;
      bVar9 = (bool)(*(byte *)(*(longlong *)(lVar8 + (longlong)(int)local_res8 * 8) + 0xf0) & 1);
      lVar8 = *(longlong *)(lVar2 + 0x300);
      plVar3 = *(longlong **)(lVar2 + 0x2f0);
      uVar13 = *(ulonglong *)(lVar2 + 0x318) &
               (((uVar12 ^ (int)local_res8 >> 8 & 0xff) * 0x100000001b3 ^
                (ulonglong)((int)local_res8 >> 0x10 & 0xff)) * 0x100000001b3 ^
               (ulonglong)((int)local_res8 >> 0x18 & 0xff)) * 0x100000001b3;
      plVar6 = *(longlong **)(lVar8 + 8 + uVar13 * 0x10);
      if (plVar6 == plVar3) {
LAB_1401f1da4:
        plVar6 = (longlong *)0x0;
      }
      else {
        uVar1 = *(uint *)(plVar6 + 2);
        while (local_res8 != uVar1) {
          if (plVar6 == *(longlong **)(lVar8 + uVar13 * 0x10)) goto LAB_1401f1da4;
          plVar6 = (longlong *)plVar6[1];
          uVar1 = *(uint *)(plVar6 + 2);
        }
      }
      if (plVar6 == (longlong *)0x0) {
        plVar6 = plVar3;
      }
      if (bVar9 != (plVar6 != plVar3)) {
        if (bVar9 == false) {
          uVar12 = *(ulonglong *)(lVar2 + 0x318) &
                   (((uVar12 ^ local_res8._1_1_) * 0x100000001b3 ^ (ulonglong)local_res8._2_1_) *
                    0x100000001b3 ^ (ulonglong)local_res8._3_1_) * 0x100000001b3;
          plVar6 = *(longlong **)(lVar8 + 8 + uVar12 * 0x10);
          if (plVar6 == plVar3) {
LAB_1401f1e40:
            plVar7 = (longlong *)0x0;
          }
          else {
            uVar1 = *(uint *)(plVar6 + 2);
            plVar7 = plVar6;
            while (local_res8 != uVar1) {
              if (plVar7 == *(longlong **)(lVar8 + uVar12 * 0x10)) goto LAB_1401f1e40;
              plVar7 = (longlong *)plVar7[1];
              uVar1 = *(uint *)(plVar7 + 2);
            }
          }
          if (plVar7 != (longlong *)0x0) {
            plVar4 = *(longlong **)(lVar8 + uVar12 * 0x10);
            if (plVar6 == plVar7) {
              if (plVar4 == plVar7) {
                *(longlong **)(lVar8 + uVar12 * 0x10) = plVar3;
                *(longlong **)(lVar8 + 8 + uVar12 * 0x10) = plVar3;
              }
              else {
                *(longlong *)(lVar8 + 8 + uVar12 * 0x10) = plVar7[1];
              }
            }
            else if (plVar4 == plVar7) {
              *(longlong *)(lVar8 + uVar12 * 0x10) = *plVar7;
            }
            lVar8 = *plVar7;
            *(longlong *)(lVar2 + 0x2f8) = *(longlong *)(lVar2 + 0x2f8) + -1;
            *(longlong *)plVar7[1] = lVar8;
            *(longlong *)(lVar8 + 8) = plVar7[1];
            thunk_FUN_14028af80(plVar7,0x18);
          }
          lVar8 = *(longlong *)(lVar2 + 0x330);
          lVar5 = thunk_FUN_14028d170(*(undefined8 *)(lVar2 + 0x328),lVar8,uVar11);
          if ((lVar5 != lVar8) && (lVar5 = FUN_14028f030(lVar5,lVar8,uVar11), lVar5 != lVar8)) {
            lVar10 = *(longlong *)(lVar2 + 0x330) - lVar8;
            FUN_1404210f0(lVar5,lVar8,lVar10);
            *(longlong *)(lVar2 + 0x330) = lVar5 + lVar10;
          }
        }
        else {
          FUN_140130b20(lVar2 + 0x2e8,local_38,&local_res8);
          FUN_14007b9c0(lVar2 + 0x328,&local_res8);
          uVar11 = local_res8;
        }
      }
      lVar8 = *(longlong *)(lVar2 + 0x2c0);
      local_res8 = uVar11 + 1;
    } while ((ulonglong)(longlong)(int)local_res8 <
             (ulonglong)(*(longlong *)(lVar2 + 0x2c8) - lVar8 >> 3));
  }
  return;
}

