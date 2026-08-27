// Function: FUN_140324050
// Addr: 140324050
// Size: 1113 bytes


ulonglong FUN_140324050(longlong param_1,uint *param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int *piVar12;
  longlong lVar13;
  short sVar14;
  uint local_res10 [2];
  uint local_res20 [2];
  uint *local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_res20[0] = param_4;
  iVar5 = FUN_1402f5c50(param_1,0);
  if (((((iVar5 == 0) &&
        (local_res20[0] = FUN_1402f5610(param_1,&DAT_14043f2b0,param_2 + 0x36), local_res20[0] == 0)
        ) && (param_2[0x3f] = param_2[0x3f] + param_2[0x48] * 0x10000, param_2[0x36] == 0x50465230))
      && ((param_2[0x37] < 5 && (0x39 < param_2[0x39])))) && (param_2[0x38] == 0xd0a)) {
    uVar9 = param_2[0x3b];
    local_res10[0] = FUN_1402f5c50(param_1,uVar9);
    uVar11 = (ulonglong)local_res10[0];
    uVar10 = 0;
    if (local_res10[0] == 0) {
      uVar4 = FUN_1402f5ac0(param_1,local_res10);
      uVar11 = (ulonglong)local_res10[0];
      uVar10 = 0;
      if ((local_res10[0] == 0) &&
         (((0x3332 < uVar4 || (*(uint *)(param_1 + 8) - uVar9 <= (uint)uVar4 * 4 + 2 + (uint)uVar4))
          || (uVar10 = (uint)uVar4, *(uint *)(param_1 + 8) <= uVar10 * 0x17 + 0x5f)))) {
        uVar11 = 8;
        uVar10 = 0;
      }
    }
    local_res20[0] = (uint)uVar11;
    if ((local_res20[0] == 0) && (*param_2 = uVar10, -1 < (int)param_3)) {
      param_3 = param_3 & 0xffff;
      if (uVar10 <= param_3) {
        return 6;
      }
      local_res20[0] =
           FUN_140326350(param_2 + 0x51,param_1,param_3,param_2[0x3b],param_2[0x48] != 0);
      uVar11 = (ulonglong)local_res20[0];
      if (local_res20[0] == 0) {
        local_res20[0] = FUN_140326800(param_2 + 0x5e,param_1,param_2[0x5c],param_2[0x5b]);
        uVar11 = (ulonglong)local_res20[0];
        if (local_res20[0] == 0) {
          param_2[1] = param_3;
          uVar11 = 0;
          uVar8 = 0;
          param_2[2] = param_2[2] | 1;
          uVar9 = param_2[2];
          param_2[4] = param_2[0x86] + 1;
          uVar10 = param_2[0x86];
          if (uVar10 != 0) {
            do {
              if (*(int *)(*(longlong *)(param_2 + 0x8a) + 0xc + uVar11 * 0x10) != 0)
              goto LAB_140324268;
              uVar8 = (int)uVar11 + 1;
              uVar11 = (ulonglong)uVar8;
            } while (uVar8 < uVar10);
          }
          if (uVar8 == uVar10) {
            if (param_2[0x7c] == 0) {
              return 3;
            }
            uVar9 = uVar9 & 0xfffffffe;
            param_2[2] = uVar9;
          }
LAB_140324268:
          if ((param_2[0x68] & 4) == 0) {
            uVar9 = param_2[2] | 4;
          }
          uVar9 = ((param_2[0x68] & 1) + 1) * 0x10 | uVar9;
          param_2[2] = uVar9;
          uVar10 = param_2[0x7c];
          if (uVar10 != 0) {
            uVar9 = uVar9 | 2;
            param_2[2] = uVar9;
          }
          if (param_2[0x8c] != 0) {
            param_2[2] = uVar9 | 0x40;
          }
          *(longlong *)(param_2 + 6) = *(longlong *)(param_2 + 0x78);
          if (*(longlong *)(param_2 + 0x78) == 0) {
            *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_2 + 0x76);
          }
          *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_2 + 0x7a);
          param_2[10] = 0;
          param_2[0xc] = 0;
          param_2[0xd] = 0;
          param_2[0x16] = param_2[100];
          param_2[0x17] = param_2[0x65];
          param_2[0x18] = param_2[0x66];
          param_2[0x19] = param_2[0x67];
          uVar4 = (ushort)param_2[0x62];
          *(ushort *)(param_2 + 0x1a) = uVar4;
          sVar2 = (short)param_2[0x67];
          *(short *)((longlong)param_2 + 0x6a) = sVar2;
          sVar3 = (short)param_2[0x65];
          *(short *)(param_2 + 0x1b) = sVar3;
          sVar14 = (short)((((uint)uVar4 + (uint)uVar4 * 2) * 4) / 10);
          *(short *)((longlong)param_2 + 0x6e) = sVar14;
          if ((int)sVar14 < (int)sVar2 - (int)sVar3) {
            sVar14 = sVar2 - sVar3;
            *(short *)((longlong)param_2 + 0x6e) = sVar14;
          }
          if (uVar10 != 0) {
            puVar6 = (undefined2 *)
                     FUN_1402f7ff0(*(undefined8 *)(param_2 + 0x26),0x10,0,uVar10,0,local_res20);
            *(undefined2 **)(param_2 + 0xc) = puVar6;
            if (local_res20[0] != 0) {
              return (ulonglong)local_res20[0];
            }
            uVar9 = 0;
            piVar12 = *(int **)(param_2 + 0x7e);
            do {
              uVar9 = uVar9 + 1;
              *puVar6 = (short)piVar12[1];
              puVar6[1] = (short)*piVar12;
              *(int *)(puVar6 + 2) = piVar12[1] << 6;
              *(int *)(puVar6 + 4) = *piVar12 << 6;
              *(int *)(puVar6 + 6) = piVar12[1] << 6;
              piVar12 = piVar12 + 10;
              puVar6 = puVar6 + 8;
            } while (uVar9 < uVar10);
            sVar14 = *(short *)((longlong)param_2 + 0x6e);
            uVar4 = (ushort)param_2[0x1a];
            param_2[10] = uVar10;
          }
          uVar9 = (uint)uVar4;
          if ((param_2[0x68] & 4) == 0) {
            uVar8 = (uint)(ushort)param_2[0x69];
          }
          else {
            uVar10 = param_2[0x86];
            uVar8 = 0;
            lVar13 = *(longlong *)(param_2 + 0x8a);
            if (uVar10 != 0) {
              do {
                puVar1 = (uint *)(lVar13 + 4);
                lVar13 = lVar13 + 0x10;
                uVar9 = *puVar1;
                if ((int)*puVar1 <= (int)uVar8) {
                  uVar9 = uVar8;
                }
                uVar8 = uVar9;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
              sVar14 = *(short *)((longlong)param_2 + 0x6e);
              uVar9 = (uint)(ushort)param_2[0x1a];
            }
          }
          *(short *)(param_2 + 0x1c) = (short)uVar8;
          *(short *)((longlong)param_2 + 0x72) = sVar14;
          local_1c = 0x10003;
          *(short *)(param_2 + 0x1d) =
               (short)(int)((longlong)(int)uVar9 * -0x66666667 >> 0x22) -
               (short)((longlong)(int)uVar9 * -0x66666667 >> 0x3f);
          local_20 = 0x756e6963;
          *(short *)((longlong)param_2 + 0x76) = (short)((ulonglong)uVar9 / 0x1e);
          local_28 = param_2;
          uVar7 = FUN_1402ef870(&DAT_14043f170,0,&local_28,0);
          uVar11 = uVar7 & 0xffffffff;
          if (param_2[0x8c] != 0) {
            param_2[2] = param_2[2] | 0x40;
            return uVar7;
          }
        }
      }
    }
  }
  else {
    uVar11 = 2;
  }
  return uVar11;
}

