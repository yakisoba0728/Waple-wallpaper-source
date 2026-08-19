// Function: FUN_14031a5e0
// Addr: 14031a5e0
// Size: 111 bytes


undefined8 FUN_14031a5e0(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ushort uVar5;
  undefined4 uVar6;
  ushort *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ushort *puVar11;
  uint uVar12;
  ushort *puVar13;
  int local_res10 [2];
  
  puVar11 = *(ushort **)(param_2 + 0x38);
  uVar9 = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  puVar13 = *(ushort **)(param_2 + 0x40);
  local_res10[0] = 0;
  if ((ushort *)((longlong)puVar11 + 0x65U) <= puVar13) {
    uVar10 = (ulonglong)*(ushort *)((longlong)puVar11 + 99);
    if (((puVar13 < (ushort *)((longlong)puVar11 + uVar10 + 0x87)) ||
        (CONCAT11(*(undefined1 *)(uVar10 + 0x76 + (longlong)puVar11),
                  *(undefined1 *)(uVar10 + 0x75 + (longlong)puVar11)) < 0x12)) ||
       (puVar7 = (ushort *)
                 ((ulonglong)
                  CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(uVar10 + 0x86 + (longlong)puVar11),
                                             *(undefined1 *)(uVar10 + 0x85 + (longlong)puVar11)),
                                    *(undefined1 *)(uVar10 + 0x84 + (longlong)puVar11)),
                           *(undefined1 *)(uVar10 + 0x83 + (longlong)puVar11)) + (longlong)puVar11),
       puVar7 == puVar11)) {
      return 0;
    }
    puVar11 = puVar7 + 1;
    if (puVar11 <= puVar13) {
      uVar12 = (uint)*puVar7;
      *(uint *)(param_3 + 0x38) = uVar12;
      if ((ushort *)((ulonglong)(uVar12 * 4) + (longlong)puVar11) <= puVar13) {
        if (uVar12 == 0) {
          return 0;
        }
        puVar8 = (undefined4 *)FUN_1402f80c0(uVar2,0x10,0,uVar12,0,local_res10);
        *(undefined4 **)(param_3 + 0x30) = puVar8;
        if (local_res10[0] == 0) {
          uVar3 = *(undefined8 *)(param_1 + 0x88);
          puVar13 = (ushort *)((ulonglong)(uint)(*(int *)(param_3 + 0x38) << 2) + (longlong)puVar11)
          ;
          if (0 < *(int *)(param_1 + 0x38)) {
            do {
              lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x40) + uVar9 * 8);
              if (*(short *)(lVar4 + 0xc) == 7) {
                *(longlong *)(param_1 + 0x88) = lVar4;
                break;
              }
              uVar12 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar12;
            } while ((int)uVar12 < *(int *)(param_1 + 0x38));
          }
          for (; puVar11 < puVar13; puVar11 = puVar11 + 2) {
            uVar6 = func_0x0001402f0130(param_1,(char)*puVar11);
            *puVar8 = uVar6;
            uVar6 = func_0x0001402f0130(param_1,*(undefined1 *)((longlong)puVar11 + 1));
            puVar8[1] = uVar6;
            bVar1 = *(byte *)((longlong)puVar11 + 3);
            uVar5 = puVar11[1];
            puVar8[3] = 0;
            puVar8[2] = (int)(short)((ushort)bVar1 << 8) | (uint)(byte)uVar5;
            puVar8 = puVar8 + 4;
          }
          *(undefined8 *)(param_1 + 0x88) = uVar3;
          func_0x0001402ea740(*(undefined8 *)(param_3 + 0x30),*(undefined4 *)(param_3 + 0x38),0x10,
                              0x14031a900);
          if (local_res10[0] == 0) {
            return 0;
          }
        }
        goto code_r0x00014031a802;
      }
    }
  }
  local_res10[0] = 2;
code_r0x00014031a802:
                    /* WARNING: Subroutine does not return */
  FUN_1402f8060(uVar2,*(undefined8 *)(param_3 + 0x30));
}

