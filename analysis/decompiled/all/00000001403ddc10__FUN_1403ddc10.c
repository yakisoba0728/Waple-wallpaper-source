// Function: FUN_1403ddc10
// Addr: 1403ddc10
// Size: 666 bytes


undefined8
FUN_1403ddc10(longlong param_1,longlong param_2,uint param_3,undefined4 param_4,uint param_5,
             int param_6)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint3 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 local_res10 [2];
  uint local_res18;
  undefined4 local_res20;
  undefined4 local_58;
  
  if ((*(byte *)(param_2 + 0x18) & 0x10) == 0) {
    local_res18 = param_3;
    local_res20 = param_4;
    if ((*(byte *)(param_2 + 0xd8) & 0x20) == 0) {
      if (*(longlong *)(param_2 + 0xe8) != 0) {
        FUN_1403ec530(param_2,param_1,
                      "skipped inserting dotted-circles because there is no broken syllables");
      }
    }
    else if ((*(longlong *)(param_2 + 0xe8) == 0) ||
            (cVar8 = FUN_1403ec530(param_2,param_1,"start inserting dotted-circles"), cVar8 != '\0')
            ) {
      local_res10[0] = 0;
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10);
      if (lVar5 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined8 *)(lVar5 + 0x10);
      }
      iVar9 = (**(code **)(*(longlong *)(param_1 + 0x90) + 0x30))
                        (param_1,*(undefined8 *)(param_1 + 0x98),0x25cc,local_res10,uVar10);
      uVar7 = local_res10[0];
      if (iVar9 != 0) {
        if (param_6 == -1) {
          param_6 = 0;
        }
        uVar13 = *(uint *)(param_2 + 0x60);
        *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_2 + 0x70);
        *(undefined2 *)(param_2 + 0x59) = 1;
        *(undefined4 *)(param_2 + 100) = 0;
        *(undefined4 *)(param_2 + 0x5c) = 0;
        if (uVar13 != 0) {
          uVar12 = 0;
          uVar11 = 0;
          do {
            if (*(char *)(param_2 + 0x58) == '\0') break;
            bVar2 = *(byte *)(*(longlong *)(param_2 + 0x70) + 0xf + uVar11 * 0x14);
            lVar5 = *(longlong *)(param_2 + 0x70) + uVar11 * 0x14;
            if ((uVar12 == bVar2) || ((bVar2 & 0xf) != param_3)) {
              FUN_1403ecfd0(param_2);
            }
            else {
              uVar3 = *(undefined4 *)(lVar5 + 8);
              uVar12 = (uint)bVar2;
              local_58._2_2_ = (ushort)param_4 & 0xff;
              uVar4 = *(undefined4 *)(lVar5 + 4);
              uVar6 = (uint3)local_58._2_2_;
              local_58 = CONCAT13((char)param_6,uVar6 << 0x10);
              if ((param_5 != 0xffffffff) && ((uint)uVar11 < uVar13)) {
                do {
                  if ((*(char *)(param_2 + 0x58) == '\0') ||
                     ((uVar12 != *(byte *)(*(longlong *)(param_2 + 0x70) + 0xf + uVar11 * 0x14) ||
                      (*(byte *)(*(longlong *)(param_2 + 0x70) + uVar11 * 0x14 + 0x12) != param_5)))
                     ) break;
                  FUN_1403ecfd0(param_2);
                  uVar11 = (ulonglong)*(uint *)(param_2 + 0x5c);
                } while (*(uint *)(param_2 + 0x5c) < *(uint *)(param_2 + 0x60));
              }
              cVar8 = FUN_1403eaf70(param_2,0,1);
              param_4 = local_res20;
              param_3 = local_res18;
              if (cVar8 != '\0') {
                puVar1 = (undefined4 *)
                         (*(longlong *)(param_2 + 0x78) + (ulonglong)*(uint *)(param_2 + 100) * 0x14
                         );
                *puVar1 = uVar7;
                puVar1[1] = uVar4;
                puVar1[2] = uVar3;
                *(undefined2 *)(puVar1 + 3) = 0;
                *(undefined1 *)((longlong)puVar1 + 0xe) = 0;
                *(byte *)((longlong)puVar1 + 0xf) = bVar2;
                puVar1[4] = local_58;
                *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
              }
            }
            uVar11 = (ulonglong)*(uint *)(param_2 + 0x5c);
            uVar13 = *(uint *)(param_2 + 0x60);
          } while (*(uint *)(param_2 + 0x5c) < uVar13);
        }
        FUN_14040c900(param_2);
        if (*(longlong *)(param_2 + 0xe8) != 0) {
          FUN_1403ec530(param_2,param_1,"end inserting dotted-circles");
        }
        return 1;
      }
    }
  }
  return 0;
}

