// Function: FUN_140265c30
// Addr: 140265c30
// Size: 4969 bytes


undefined8 FUN_140265c30(char *param_1,uint *param_2)

{
  longlong lVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  undefined8 uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  uint local_128 [2];
  uint6 local_120;
  short sStack_11a;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60 [4];
  
  *param_2 = 0;
  FUN_1401165f0(local_128);
  if ((*param_1 != '\0') && (cVar6 = FUN_14015c290(param_1,local_128), cVar6 != '\0')) {
    FUN_140116800(local_128,&local_res8,&DAT_14049214c);
    FUN_140116800(local_128,&local_res10,&DAT_140492150);
    FUN_140116800(local_128,&local_c8,&DAT_140492158);
    FUN_140116800(local_128,&local_c0,&DAT_14049215c);
    FUN_140116800(local_128,&local_res18,&DAT_1404907c8);
    FUN_140116800(local_128,&local_res20,&DAT_14049213c);
    if (sStack_11a != 3) {
      FID_conflict__assert
                (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                 0x4fd);
    }
    if (((local_res8 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) &&
        ((*(byte *)(local_res8 + 0x1e) & 8) != 0)) &&
       (cVar6 = FUN_140116b90(local_res8 + 0x10), cVar6 != '\0')) {
      *param_2 = *param_2 | 0x4000;
    }
    if (sStack_11a != 3) {
      FID_conflict__assert
                (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                 0x4fd);
    }
    if (((local_res10 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) &&
        ((*(byte *)(local_res10 + 0x1e) & 8) != 0)) &&
       (cVar6 = FUN_140116b90(local_res10 + 0x10), cVar6 != '\0')) {
      *param_2 = *param_2 | 0x8000;
    }
    if (sStack_11a != 3) {
      FID_conflict__assert
                (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                 0x4fd);
    }
    if (((local_res18 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) &&
        ((*(byte *)(local_res18 + 0x1e) & 8) != 0)) &&
       (cVar6 = FUN_140116b90(local_res18 + 0x10), cVar6 != '\0')) {
      *param_2 = *param_2 | 0x1000;
    }
    if (sStack_11a != 3) {
      FID_conflict__assert
                (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                 0x4fd);
    }
    if (((local_res20 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) &&
        ((*(byte *)(local_res20 + 0x1e) & 8) != 0)) &&
       (cVar6 = FUN_140116b90(local_res20 + 0x10), cVar6 != '\0')) {
      *param_2 = *param_2 | 0x2000;
    }
    if (sStack_11a != 3) {
      FID_conflict__assert
                (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                 0x4fd);
    }
    if (((local_c8 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) &&
        ((*(byte *)(local_c8 + 0x1e) & 8) != 0)) &&
       (cVar6 = FUN_140116b90(local_c8 + 0x10), cVar6 != '\0')) {
      *param_2 = *param_2 | 1;
    }
    if (sStack_11a != 3) {
      FID_conflict__assert
                (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                 0x4fd);
    }
    if (((local_c0 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) &&
        ((*(byte *)(local_c0 + 0x1e) & 8) != 0)) &&
       (cVar6 = FUN_140116b90(local_c0 + 0x10), cVar6 != '\0')) {
      *param_2 = *param_2 | 2;
    }
    uVar8 = *param_2;
    bVar3 = (uVar8 & 0x3000) != 0 && (uVar8 & 3) != 0;
    if ((bVar3) || ((uVar8 & 0x4000) != 0)) {
      FUN_140116800(local_128,&local_res8,&DAT_1404906dc);
      FUN_140116800(local_128,&local_res10,&DAT_140492140);
      FUN_140116800(local_128,&local_res18,&DAT_140492144);
      FUN_140116800(local_128,&local_res20,&DAT_140492148);
      if (sStack_11a != 3) {
        FID_conflict__assert
                  (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                   0x4fd);
      }
      if (((local_res8 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) &&
          ((*(byte *)(local_res8 + 0x1e) & 8) != 0)) &&
         (cVar6 = FUN_140116b90(local_res8 + 0x10), cVar6 != '\0')) {
        *param_2 = *param_2 | 4;
      }
      if (sStack_11a != 3) {
        FID_conflict__assert
                  (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                   0x4fd);
      }
      if ((local_res10 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) &&
         ((*(ushort *)(local_res10 + 0x1e) & 0x400) != 0)) {
        pcVar9 = (char *)FUN_140117000(local_res10 + 0x10);
        param_2[7] = 0;
        param_2[8] = 0;
        param_2[9] = 0;
        if ((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) {
          dVar2 = (double)FUN_1402d06ac(pcVar9);
          param_2[7] = (uint)(float)dVar2;
          cVar6 = *pcVar9;
          while (cVar6 != '\0') {
            if (*pcVar9 == ' ') {
              bVar4 = false;
              goto LAB_140266081;
            }
            pcVar9 = pcVar9 + 1;
            cVar6 = *pcVar9;
          }
        }
      }
      goto LAB_1402660ea;
    }
    goto LAB_140266475;
  }
  goto LAB_14026655c;
  while( true ) {
    pcVar9 = pcVar9 + 1;
    bVar4 = true;
    if (*pcVar9 == '\0') break;
LAB_140266081:
    if (*pcVar9 != ' ') {
      if (!bVar4) goto LAB_1402660ea;
      break;
    }
  }
  dVar2 = (double)FUN_1402d06ac(pcVar9);
  param_2[8] = (uint)(float)dVar2;
  cVar6 = *pcVar9;
  while (cVar6 != '\0') {
    if (*pcVar9 == ' ') {
      bVar4 = false;
      goto LAB_1402660c1;
    }
    pcVar9 = pcVar9 + 1;
    cVar6 = *pcVar9;
  }
  goto LAB_1402660ea;
  while( true ) {
    pcVar9 = pcVar9 + 1;
    bVar4 = true;
    if (*pcVar9 == '\0') break;
LAB_1402660c1:
    if (*pcVar9 != ' ') {
      if (!bVar4) goto LAB_1402660ea;
      break;
    }
  }
  dVar2 = (double)FUN_1402d06ac(pcVar9);
  param_2[9] = (uint)(float)dVar2;
LAB_1402660ea:
  if (sStack_11a != 3) {
    FID_conflict__assert
              (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0x4fd
              );
  }
  if ((local_res18 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) &&
     ((*(byte *)(local_res18 + 0x1e) & 0x10) != 0)) {
    uVar11 = FUN_140116720(local_res18 + 0x10);
    param_2[10] = uVar11;
  }
  if (sStack_11a != 3) {
    FID_conflict__assert
              (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0x4fd
              );
  }
  if ((local_res20 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) &&
     ((*(byte *)(local_res20 + 0x1e) & 0x10) != 0)) {
    uVar11 = FUN_140116720(local_res20 + 0x10);
    param_2[4] = uVar11;
  }
  fVar5 = DAT_140492704;
  if (bVar3) {
    FUN_140116800(local_128,&local_res8,&DAT_140492170);
    FUN_140116800(local_128,&local_res10,&DAT_140492174);
    FUN_140116800(local_128,&local_res18,&DAT_140492178);
    FUN_140116800(local_128,&local_c8,&DAT_14049217c);
    FUN_140116800(local_128,&local_b8,&DAT_140492160);
    FUN_140116800(local_128,&local_res20,&DAT_140492164);
    FUN_140116800(local_128,&local_c0,&DAT_140492168);
    FUN_140116800(local_128,&local_b0,&DAT_14049216c);
    FUN_140116800(local_128,&local_a8,"lamin");
    FUN_140116800(local_128,&local_a0,"lamax");
    FUN_140116800(local_128,&local_98,&DAT_14049074c);
    FUN_140116800(local_128,&local_90,"ltmax");
    FUN_140116800(local_128,&local_88,&DAT_1404921a8);
    FUN_140116800(local_128,&local_80,&DAT_140492180);
    FUN_140116800(local_128,&local_78,&DAT_140492184);
    FUN_140116800(local_128,&local_70,&DAT_140492188);
    FUN_140116800(local_128,&local_68,&DAT_14049218c);
    FUN_140116800(local_128,local_60,&DAT_1404921d0);
    if (sStack_11a != 3) {
      FID_conflict__assert
                (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                 0x4fd);
    }
    if ((local_res8 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) &&
       ((*(byte *)(local_res8 + 0x1e) & 0x10) != 0)) {
      uVar8 = FUN_140116720(local_res8 + 0x10);
      param_2[1] = uVar8;
    }
    if (sStack_11a != 3) {
      FID_conflict__assert
                (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                 0x4fd);
    }
    if ((local_res10 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) &&
       ((*(byte *)(local_res10 + 0x1e) & 0x10) != 0)) {
      uVar8 = FUN_140116720(local_res10 + 0x10);
      param_2[2] = uVar8;
    }
    if (sStack_11a != 3) {
      FID_conflict__assert
                (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                 0x4fd);
    }
    if ((local_res18 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) &&
       ((*(byte *)(local_res18 + 0x1e) & 0x10) != 0)) {
      uVar8 = FUN_140116720(local_res18 + 0x10);
      param_2[3] = uVar8;
    }
    if (sStack_11a != 3) {
      FID_conflict__assert
                (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                 0x4fd);
    }
    fVar5 = DAT_140492704;
    fVar12 = DAT_140492704;
    if ((local_res20 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) &&
       ((*(ushort *)(local_res20 + 0x1e) & 0x400) != 0)) {
      pcVar9 = (char *)FUN_140117000(local_res20 + 0x10);
      param_2[0xb] = 0;
      param_2[0xc] = 0;
      param_2[0xd] = 0;
      if ((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) {
        dVar2 = (double)FUN_1402d06ac(pcVar9);
        param_2[0xb] = (uint)(float)dVar2;
        cVar6 = *pcVar9;
        while (cVar6 != '\0') {
          if (*pcVar9 == ' ') {
            bVar3 = false;
            goto LAB_140266898;
          }
          pcVar9 = pcVar9 + 1;
          cVar6 = *pcVar9;
        }
      }
      goto LAB_140266900;
    }
    goto LAB_140266951;
  }
  fVar12 = ((float)param_2[4] / DAT_1404928f8) * ((float)param_2[4] / DAT_1404928f8);
  if (((DAT_140492704 <= fVar12) || (fVar13 = 0.0, 0.0 <= fVar12)) &&
     (fVar13 = fVar12, DAT_140492704 <= fVar12)) {
    fVar13 = DAT_140492704;
  }
  param_2[4] = (uint)fVar13;
  if ((uVar8 & 0x4000) == 0) {
LAB_140266475:
    if ((*param_2 & 0x8000) == 0) {
      *param_2 = 0;
LAB_14026655c:
      uVar10 = 0;
      goto LAB_14026655e;
    }
    FUN_140116800(local_128,&local_res8,"ikrminl");
    if (sStack_11a != 3) {
      FID_conflict__assert
                (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                 0x4fd);
    }
    if ((local_res8 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) &&
       ((*(byte *)(local_res8 + 0x1e) & 0x10) != 0)) {
      uVar8 = FUN_140116720(local_res8 + 0x10);
      param_2[0x19] = uVar8;
    }
    FUN_140116800(local_128,&local_res8,"ikrmaxl");
    if (sStack_11a != 3) {
      FID_conflict__assert
                (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                 0x4fd);
    }
    if ((local_res8 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) &&
       ((*(byte *)(local_res8 + 0x1e) & 0x10) != 0)) {
      uVar8 = FUN_140116720(local_res8 + 0x10);
      param_2[0x1a] = uVar8;
      uVar10 = 1;
      goto LAB_14026655e;
    }
  }
  else {
    FUN_140116800(local_128,&local_res8,&DAT_1404921d4);
    if (sStack_11a != 3) {
      FID_conflict__assert
                (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                 0x4fd);
    }
    if ((local_res8 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) &&
       (lVar1 = local_res8 + 0x10, (*(byte *)(local_res8 + 0x1e) & 0x10) != 0)) {
      iVar7 = FUN_140164120(lVar1);
      if (iVar7 < 2) {
        uVar8 = 1;
      }
      else {
        uVar8 = FUN_140164120(lVar1);
      }
      param_2[0x17] = uVar8;
    }
    FUN_140116800(local_128,&local_res8,&DAT_1404921d8);
    if (sStack_11a != 3) {
      FID_conflict__assert
                (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                 0x4fd);
    }
    if (((local_res8 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) &&
        ((*(byte *)(local_res8 + 0x1e) & 8) != 0)) &&
       (cVar6 = FUN_140116b90(local_res8 + 0x10), cVar6 != '\0')) {
      *param_2 = *param_2 | 0x20;
    }
    FUN_140116800(local_128,&local_res8,&DAT_1404921dc);
    if (sStack_11a != 3) {
      FID_conflict__assert
                (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                 0x4fd);
    }
    if (((local_res8 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) &&
        ((*(byte *)(local_res8 + 0x1e) & 8) != 0)) &&
       (cVar6 = FUN_140116b90(local_res8 + 0x10), cVar6 != '\0')) {
      *param_2 = *param_2 | 0x40;
      FUN_140116800(local_128,&local_res8,&DAT_1404921ac);
      if (sStack_11a != 3) {
        FID_conflict__assert
                  (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                   0x4fd);
      }
      if ((local_res8 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) &&
         ((*(byte *)(local_res8 + 0x1e) & 0x10) != 0)) {
        fVar12 = (float)FUN_140116720(local_res8 + 0x10);
        if (fVar12 <= fVar5) {
          fVar12 = fVar5;
        }
        param_2[0x18] = (uint)fVar12;
      }
    }
    FUN_140116800(local_128,&local_res8,&DAT_1404921b4);
    if (sStack_11a != 3) {
      FID_conflict__assert
                (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                 0x4fd);
    }
    if (((local_res8 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) &&
        ((*(byte *)(local_res8 + 0x1e) & 8) != 0)) &&
       (cVar6 = FUN_140116b90(local_res8 + 0x10), cVar6 != '\0')) {
      *param_2 = *param_2 | 0x80;
    }
    FUN_140116800(local_128,&local_res8,&DAT_1404921bc);
    if (sStack_11a != 3) {
      FID_conflict__assert
                (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                 0x4fd);
    }
    if (((local_res8 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) &&
        ((*(byte *)(local_res8 + 0x1e) & 8) != 0)) &&
       (cVar6 = FUN_140116b90(local_res8 + 0x10), cVar6 != '\0')) {
      *param_2 = *param_2 | 0x100;
      uVar10 = 1;
      goto LAB_14026655e;
    }
  }
  goto LAB_140266f92;
  while( true ) {
    pcVar9 = pcVar9 + 1;
    bVar3 = true;
    if (*pcVar9 == '\0') break;
LAB_140266898:
    if (*pcVar9 != ' ') {
      if (!bVar3) goto LAB_140266900;
      break;
    }
  }
  dVar2 = (double)FUN_1402d06ac(pcVar9);
  param_2[0xc] = (uint)(float)dVar2;
  cVar6 = *pcVar9;
  while (cVar6 != '\0') {
    if (*pcVar9 == ' ') {
      bVar3 = false;
      goto LAB_1402668d7;
    }
    pcVar9 = pcVar9 + 1;
    cVar6 = *pcVar9;
  }
  goto LAB_140266900;
  while( true ) {
    pcVar9 = pcVar9 + 1;
    bVar3 = true;
    if (*pcVar9 == '\0') break;
LAB_1402668d7:
    if (*pcVar9 != ' ') {
      if (!bVar3) goto LAB_140266900;
      break;
    }
  }
  dVar2 = (double)FUN_1402d06ac(pcVar9);
  param_2[0xd] = (uint)(float)dVar2;
LAB_140266900:
  fVar12 = (float)param_2[0xb] * (float)param_2[0xb] + (float)param_2[0xc] * (float)param_2[0xc] +
           (float)param_2[0xd] * (float)param_2[0xd];
  if (fVar12 < 0.0) {
    fVar12 = (float)FUN_14041ad10(fVar12);
    fVar12 = fVar12 / DAT_1404928f8;
  }
  else {
    fVar12 = SQRT(fVar12) / DAT_1404928f8;
  }
LAB_140266951:
  param_2[0xe] = (uint)fVar12;
  if (sStack_11a != 3) {
    FID_conflict__assert
              (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0x4fd
              );
  }
  if ((local_c0 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) &&
     ((*(byte *)(local_c0 + 0x1e) & 0x10) != 0)) {
    uVar8 = FUN_140116720(local_c0 + 0x10);
    param_2[0xf] = uVar8;
  }
  if (sStack_11a != 3) {
    FID_conflict__assert
              (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0x4fd
              );
  }
  if ((local_c8 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) &&
     ((*(byte *)(local_c8 + 0x1e) & 0x10) != 0)) {
    fVar12 = (float)FUN_140116720(local_c8 + 0x10);
    param_2[5] = (uint)(fVar5 - fVar12 / DAT_1404928f8);
  }
  if (sStack_11a != 3) {
    FID_conflict__assert
              (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0x4fd
              );
  }
  if ((local_b8 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) &&
     ((*(byte *)(local_b8 + 0x1e) & 0x10) != 0)) {
    fVar12 = (float)FUN_140116720(local_b8 + 0x10);
    param_2[6] = (uint)(fVar5 - fVar12 / DAT_1404928f8);
  }
  if (sStack_11a != 3) {
    FID_conflict__assert
              (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0x4fd
              );
  }
  if (((local_b0 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) &&
      ((*(ushort *)(local_b0 + 0x1e) & 8) != 0)) && (*(ushort *)(local_b0 + 0x1e) == 10)) {
    *param_2 = *param_2 | 8;
    if (sStack_11a != 3) {
      FID_conflict__assert
                (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                 0x4fd);
    }
    if ((local_a8 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) &&
       ((*(ushort *)(local_a8 + 0x1e) & 0x400) != 0)) {
      pcVar9 = (char *)FUN_140117000(local_a8 + 0x10);
      param_2[0x10] = 0;
      param_2[0x11] = 0;
      param_2[0x12] = 0;
      if ((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) {
        dVar2 = (double)FUN_1402d06ac(pcVar9);
        param_2[0x10] = (uint)(float)dVar2;
        cVar6 = *pcVar9;
        while (cVar6 != '\0') {
          if (*pcVar9 == ' ') {
            bVar3 = false;
            goto LAB_140266b61;
          }
          pcVar9 = pcVar9 + 1;
          cVar6 = *pcVar9;
        }
      }
    }
    goto LAB_140266bca;
  }
  goto LAB_140266cce;
  while( true ) {
    pcVar9 = pcVar9 + 1;
    bVar3 = true;
    if (*pcVar9 == '\0') break;
LAB_140266b61:
    if (*pcVar9 != ' ') {
      if (!bVar3) goto LAB_140266bca;
      break;
    }
  }
  dVar2 = (double)FUN_1402d06ac(pcVar9);
  param_2[0x11] = (uint)(float)dVar2;
  cVar6 = *pcVar9;
  while (cVar6 != '\0') {
    if (*pcVar9 == ' ') {
      bVar3 = false;
      goto LAB_140266ba1;
    }
    pcVar9 = pcVar9 + 1;
    cVar6 = *pcVar9;
  }
  goto LAB_140266bca;
  while( true ) {
    pcVar9 = pcVar9 + 1;
    bVar3 = true;
    if (*pcVar9 == '\0') break;
LAB_140266ba1:
    if (*pcVar9 != ' ') {
      if (!bVar3) goto LAB_140266bca;
      break;
    }
  }
  dVar2 = (double)FUN_1402d06ac(pcVar9);
  param_2[0x12] = (uint)(float)dVar2;
LAB_140266bca:
  if (sStack_11a != 3) {
    FID_conflict__assert
              (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0x4fd
              );
  }
  if ((local_a0 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) &&
     ((*(ushort *)(local_a0 + 0x1e) & 0x400) != 0)) {
    pcVar9 = (char *)FUN_140117000(local_a0 + 0x10);
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    if ((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) {
      dVar2 = (double)FUN_1402d06ac(pcVar9);
      param_2[0x13] = (uint)(float)dVar2;
      cVar6 = *pcVar9;
      while (cVar6 != '\0') {
        if (*pcVar9 == ' ') {
          bVar3 = false;
          goto LAB_140266c66;
        }
        pcVar9 = pcVar9 + 1;
        cVar6 = *pcVar9;
      }
    }
  }
  goto LAB_140266cce;
  while( true ) {
    pcVar9 = pcVar9 + 1;
    bVar3 = true;
    if (*pcVar9 == '\0') break;
LAB_140266c66:
    if (*pcVar9 != ' ') {
      if (!bVar3) goto LAB_140266cce;
      break;
    }
  }
  dVar2 = (double)FUN_1402d06ac(pcVar9);
  param_2[0x14] = (uint)(float)dVar2;
  cVar6 = *pcVar9;
  while (cVar6 != '\0') {
    if (*pcVar9 == ' ') {
      bVar3 = false;
      goto LAB_140266ca5;
    }
    pcVar9 = pcVar9 + 1;
    cVar6 = *pcVar9;
  }
  goto LAB_140266cce;
  while( true ) {
    pcVar9 = pcVar9 + 1;
    bVar3 = true;
    if (*pcVar9 == '\0') break;
LAB_140266ca5:
    if (*pcVar9 != ' ') {
      if (!bVar3) goto LAB_140266cce;
      break;
    }
  }
  dVar2 = (double)FUN_1402d06ac(pcVar9);
  param_2[0x15] = (uint)(float)dVar2;
LAB_140266cce:
  if (sStack_11a != 3) {
    FID_conflict__assert
              (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0x4fd
              );
  }
  if (((local_98 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) &&
      ((*(byte *)(local_98 + 0x1e) & 8) != 0)) &&
     (cVar6 = FUN_140116b90(local_98 + 0x10), cVar6 != '\0')) {
    *param_2 = *param_2 | 0x10;
    if (sStack_11a != 3) {
      FID_conflict__assert
                (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                 0x4fd);
    }
    if ((local_90 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) &&
       ((*(byte *)(local_90 + 0x1e) & 0x10) != 0)) {
      uVar8 = FUN_140116720(local_90 + 0x10);
      param_2[0x16] = uVar8;
    }
  }
  if (sStack_11a != 3) {
    FID_conflict__assert
              (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0x4fd
              );
  }
  if (local_88 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) {
    if (sStack_11a != 3) {
      FID_conflict__assert
                (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                 0x4fd);
    }
    if (local_80 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) {
      if (sStack_11a != 3) {
        FID_conflict__assert
                  (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                   0x4fd);
      }
      if (((local_78 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) &&
          ((*(byte *)(local_88 + 0x1e) & 8) != 0)) &&
         (((*(byte *)(local_80 + 0x1e) & 8) != 0 && ((*(byte *)(local_78 + 0x1e) & 8) != 0)))) {
        cVar6 = FUN_140116b90(local_88 + 0x10);
        if (cVar6 == '\0') {
          *param_2 = *param_2 | 0x100000;
        }
        cVar6 = FUN_140116b90(local_80 + 0x10);
        if (cVar6 == '\0') {
          *param_2 = *param_2 | 0x200000;
        }
        cVar6 = FUN_140116b90(local_78 + 0x10);
        if (cVar6 == '\0') {
          *param_2 = *param_2 | 0x400000;
        }
      }
    }
  }
  if (sStack_11a != 3) {
    FID_conflict__assert
              (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0x4fd
              );
  }
  if (local_70 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) {
    if (sStack_11a != 3) {
      FID_conflict__assert
                (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                 0x4fd);
    }
    if (local_68 != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) {
      if (sStack_11a != 3) {
        FID_conflict__assert
                  (L"IsObject()",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",
                   0x4fd);
      }
      if ((((local_60[0] != (ulonglong)local_128[0] * 0x20 + (ulonglong)local_120) &&
           ((*(byte *)(local_70 + 0x1e) & 8) != 0)) && ((*(byte *)(local_68 + 0x1e) & 8) != 0)) &&
         ((*(byte *)(local_60[0] + 0x1e) & 8) != 0)) {
        cVar6 = FUN_140116b90(local_70 + 0x10);
        if (cVar6 == '\0') {
          *param_2 = *param_2 | 0x800000;
        }
        cVar6 = FUN_140116b90(local_68 + 0x10);
        if (cVar6 == '\0') {
          *param_2 = *param_2 | 0x1000000;
        }
        cVar6 = FUN_140116b90(local_60[0] + 0x10);
        if (cVar6 == '\0') {
          *param_2 = *param_2 | 0x2000000;
        }
      }
    }
  }
LAB_140266f92:
  uVar10 = 1;
LAB_14026655e:
  FUN_1401164f0(local_128);
  return uVar10;
}

