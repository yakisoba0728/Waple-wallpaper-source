// Function: FUN_14020ea30
// Addr: 14020ea30
// Size: 1253 bytes


void FUN_14020ea30(longlong param_1,int param_2,uint *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  char *_Str;
  longlong *plVar1;
  code *pcVar2;
  undefined7 uVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  size_t sVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  byte *pbVar11;
  undefined2 uVar12;
  ulonglong uVar13;
  uint uVar14;
  char *unaff_RBX;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  ulonglong local_90;
  longlong local_88;
  undefined1 local_80 [8];
  uint local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  undefined4 local_50;
  
  _Str = (char *)*param_4;
  if ((((*_Str != '\0') && (*(longlong *)(param_1 + 0x4b8) != 0)) &&
      (*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 8) != 0)) && (0 < param_2)) {
    local_78 = (local_78 >> 8 & 0xfffffe) << 8;
    local_60 = 0;
    local_70 = 0;
    uStack_68 = 0;
    if (1 < param_2) {
      unaff_RBX = (char *)param_4[1];
      local_98 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_90 = 0;
      sVar7 = strlen(unaff_RBX);
      FUN_140017480(&local_a8,unaff_RBX,sVar7);
      FUN_140017840(&local_a8,local_80,0);
      if (0xf < local_90) {
        uVar13 = local_90 + 1;
        lVar8 = local_a8;
        if (0xfff < uVar13) {
          lVar8 = *(longlong *)(local_a8 + -8);
          if (0x1f < (local_a8 - lVar8) - 8U) goto LAB_14020eeed;
          uVar13 = local_90 + 0x28;
        }
        thunk_FUN_14028af80(lVar8,uVar13);
      }
    }
    lVar8 = FUN_140087490(local_80,"blendin","");
    if (lVar8 == 0) {
      local_50 = CONCAT31(local_50._1_3_,5);
      local_58 = 1;
      plVar9 = (longlong *)FUN_140086de0(local_80,"blendin","");
      uVar14 = *(uint *)(plVar9 + 1);
      *(uint *)(plVar9 + 1) = local_50 & 0xfffffeff;
      lVar8 = *plVar9;
      *plVar9 = CONCAT71(uStack_57,local_58);
      unaff_RBX = (char *)plVar9[2];
      plVar9[2] = 0;
      plVar9[3] = 0;
      plVar9[4] = 0;
      switch(uVar14 & 0xff) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 5:
        break;
      case 4:
        if ((uVar14 >> 8 & 1) != 0) {
          thunk_FUN_1402d9040(lVar8);
        }
        break;
      case 6:
      case 7:
        if (lVar8 != 0) {
          FUN_140088e40(lVar8);
          thunk_FUN_14028af80(lVar8,0x10);
        }
        break;
      default:
        FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434)
        ;
      }
      if (unaff_RBX != (char *)0x0) {
        FUN_140017240(unaff_RBX + 0x40);
        FUN_140017240(unaff_RBX + 0x20);
        FUN_140017240(unaff_RBX);
        thunk_FUN_14028af80(unaff_RBX,0x60);
      }
    }
    lVar8 = FUN_140087490(local_80,"blendout","");
    if (lVar8 == 0) {
      local_50 = CONCAT31(local_50._1_3_,5);
      local_58 = 1;
      plVar9 = (longlong *)FUN_140086de0(local_80,"blendout","");
      uVar14 = *(uint *)(plVar9 + 1);
      *(uint *)(plVar9 + 1) = local_50 & 0xfffffeff;
      lVar8 = *plVar9;
      *plVar9 = CONCAT71(uStack_57,local_58);
      unaff_RBX = (char *)plVar9[2];
      plVar9[2] = 0;
      plVar9[3] = 0;
      plVar9[4] = 0;
      switch(uVar14 & 0xff) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 5:
        break;
      case 4:
        if ((uVar14 >> 8 & 1) != 0) {
          thunk_FUN_1402d9040(lVar8);
        }
        break;
      case 6:
      case 7:
        if (lVar8 != 0) {
          FUN_140088e40(lVar8);
          thunk_FUN_14028af80(lVar8,0x10);
        }
        break;
      default:
        FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434)
        ;
      }
      if (unaff_RBX != (char *)0x0) {
        FUN_140017240(unaff_RBX + 0x40);
        FUN_140017240(unaff_RBX + 0x20);
        FUN_140017240(unaff_RBX);
        thunk_FUN_14028af80(unaff_RBX,0x60);
      }
    }
    if ((*param_3 >> 9 & 1) == 0) {
      if ((*param_3 >> 10 & 1) != 0) {
        FUN_140084dd0(&local_58,0);
        local_98 = 0;
        local_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        sVar7 = strlen(_Str);
        FUN_140017480(&local_a8,_Str,sVar7);
        FUN_140017840(&local_a8,&local_58,0);
        if (0xf < local_90) {
          uVar13 = local_90 + 1;
          lVar8 = local_a8;
          if (0xfff < uVar13) {
            lVar8 = *(longlong *)(local_a8 + -8);
            if (0x1f < (local_a8 - lVar8) - 8U) {
LAB_14020eeed:
              uVar12 = (undefined2)uVar13;
              pcVar2 = (code *)swi(0x29);
              uVar10 = (*pcVar2)(5);
              in(uVar12);
              uVar12 = CONCAT11((char)((ushort)uVar12 >> 8) + (char)unaff_RBX,(char)uVar12);
              bVar6 = in(uVar12);
              pbVar11 = (byte *)CONCAT71((int7)((ulonglong)uVar10 >> 8),bVar6);
              *pbVar11 = *pbVar11 & bVar6;
              *pbVar11 = *pbVar11 & bVar6;
              *pbVar11 = *pbVar11 & bVar6;
              uVar3 = (undefined7)((ulonglong)((longlong)&local_50 + 1) >> 8);
              bVar6 = in(uVar12);
              pbVar11 = (byte *)(CONCAT71(uVar3,bVar6) & 0xffffffff);
              *pbVar11 = *pbVar11 & bVar6;
              *pbVar11 = *pbVar11 & bVar6;
              bVar6 = in(uVar12);
              pbVar11 = (byte *)(CONCAT71(uVar3,bVar6) & 0xffffffff);
              *pbVar11 = *pbVar11 & bVar6;
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar13 = local_90 + 0x28;
          }
          thunk_FUN_14028af80(lVar8,uVar13);
        }
        FUN_140018100(&local_58,local_80);
        uVar10 = FUN_1401fcc20(param_1,&local_58);
        *param_5 = uVar10;
        FUN_140085440(&local_58);
      }
    }
    else {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x4b8) + 0xd0);
      for (plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x4b8) + 200); plVar9 != plVar1;
          plVar9 = plVar9 + 0x2b) {
        cVar5 = FUN_14000d010(plVar9 + 1,_Str);
        if (cVar5 != '\0') {
          lVar8 = *plVar9;
          if (lVar8 != 0) {
            uStack_a0 = CONCAT71(uStack_a0._1_7_,2);
            uVar14 = (uint)uStack_a0 & 0xfffffeff;
            plVar9 = (longlong *)FUN_140086de0(local_80,"animation","");
            lVar4 = plVar9[1];
            *(uint *)(plVar9 + 1) = uVar14;
            uStack_a0 = CONCAT44(uStack_a0._4_4_,(int)lVar4);
            local_a8 = *plVar9;
            *plVar9 = lVar8;
            lVar8 = plVar9[2];
            plVar9[2] = 0;
            local_88 = plVar9[4];
            local_90 = plVar9[3];
            plVar9[3] = 0;
            plVar9[4] = 0;
            local_98 = lVar8;
            FUN_140086d30(&local_a8);
            if (lVar8 != 0) {
              FUN_140017240(lVar8 + 0x40);
              FUN_140017240(lVar8 + 0x20);
              FUN_140017240(lVar8);
              thunk_FUN_14028af80(lVar8,0x60);
            }
            uVar10 = FUN_1401fcc20(param_1,local_80);
            *param_5 = uVar10;
          }
          break;
        }
      }
    }
    FUN_140085440(local_80);
  }
  return;
}

