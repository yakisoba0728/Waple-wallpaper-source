// Function: FUN_1400d3fc0
// Addr: 1400d3fc0
// Size: 19 bytes


undefined1 (*) [32] FUN_1400d3fc0(longlong *param_1,undefined1 (*param_2) [32],int param_3)

{
  undefined1 auVar1 [32];
  int *piVar2;
  int iVar3;
  undefined1 (*pauVar4) [32];
  undefined1 (*pauVar5) [32];
  undefined1 (*pauVar6) [16];
  int *piVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auVar11 [32];
  
  uVar9 = (ulonglong)param_3;
  piVar2 = (int *)param_1[1];
  if ((longlong)piVar2 + ((uVar9 + 4) - *param_1) <= (ulonglong)*(uint *)(param_1 + 2)) {
    if ((longlong)(ulonglong)*(uint *)(param_1 + 2) < (longlong)piVar2 + (4 - *param_1)) {
      iVar3 = 0;
      piVar7 = piVar2;
    }
    else {
      piVar7 = piVar2 + 1;
      param_1[1] = (longlong)piVar7;
      iVar3 = *piVar2;
      if (iVar3 < 0) goto code_r0x0001400d4030;
    }
    if (iVar3 < param_3) {
      param_3 = iVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(param_2,piVar7,(longlong)param_3);
  }
code_r0x0001400d4030:
  switch(uVar9) {
  case 0:
    return param_2;
  case 8:
    *(undefined8 *)(param_2[-1] + uVar9 + 0x18) = 0;
    return param_2;
  case 9:
    *(undefined8 *)(param_2[-1] + uVar9 + 0x17) = 0;
    param_2[-1][uVar9 + 0x1f] = 0;
    return param_2;
  case 10:
    *(undefined8 *)(param_2[-1] + uVar9 + 0x16) = 0;
    *(undefined2 *)(param_2[-1] + uVar9 + 0x1e) = 0;
    return param_2;
  case 0xb:
    *(undefined8 *)(param_2[-1] + uVar9 + 0x15) = 0;
    *(undefined2 *)(param_2[-1] + uVar9 + 0x1d) = 0;
    param_2[-1][uVar9 + 0x1f] = 0;
    return param_2;
  case 0xc:
    *(undefined8 *)(param_2[-1] + uVar9 + 0x14) = 0;
  case 4:
    *(undefined4 *)(param_2[-1] + uVar9 + 0x1c) = 0;
    return param_2;
  case 0xd:
    *(undefined8 *)(param_2[-1] + uVar9 + 0x13) = 0;
  case 5:
    *(undefined4 *)(param_2[-1] + uVar9 + 0x1b) = 0;
    param_2[-1][uVar9 + 0x1f] = 0;
    return param_2;
  case 0xe:
    *(undefined8 *)(param_2[-1] + uVar9 + 0x12) = 0;
  case 6:
    *(undefined4 *)(param_2[-1] + uVar9 + 0x1a) = 0;
  case 2:
    *(undefined2 *)(param_2[-1] + uVar9 + 0x1e) = 0;
    return param_2;
  case 0xf:
    *(undefined8 *)(param_2[-1] + uVar9 + 0x11) = 0;
  case 7:
    *(undefined4 *)(param_2[-1] + uVar9 + 0x19) = 0;
  case 3:
    *(undefined2 *)(param_2[-1] + uVar9 + 0x1d) = 0;
  case 1:
    param_2[-1][uVar9 + 0x1f] = 0;
    return param_2;
  }
  auVar11._0_16_ = ZEXT816(0);
  if (uVar9 < 0x21) {
    *(undefined1 (*) [16])*param_2 = auVar11._0_16_;
    *(undefined1 (*) [16])(param_2[-1] + uVar9 + 0x10) = auVar11._0_16_;
    return param_2;
  }
  pauVar4 = param_2;
  if (DAT_1404dc0d8 < 3) {
    if ((uVar9 <= uRam00000001404dc0e0) || ((DAT_1404e3b5c & 2) == 0)) {
      lVar10 = ((ulonglong)param_2 & 0xf) - 0x10;
      pauVar6 = (undefined1 (*) [16])((longlong)param_2 - lVar10);
      uVar9 = uVar9 + lVar10;
      if (0x80 < uVar9) {
        do {
          *pauVar6 = auVar11._0_16_;
          pauVar6[1] = auVar11._0_16_;
          pauVar6[2] = auVar11._0_16_;
          pauVar6[3] = auVar11._0_16_;
          pauVar6[4] = auVar11._0_16_;
          pauVar6[5] = auVar11._0_16_;
          pauVar6[6] = auVar11._0_16_;
          pauVar6[7] = auVar11._0_16_;
          pauVar6 = pauVar6 + 8;
          uVar9 = uVar9 - 0x80;
        } while (0x7f < uVar9);
      }
                    /* WARNING: Could not recover jumptable at 0x000140421bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pauVar4 = (undefined1 (*) [32])
                (*(code *)(&DAT_140000080.field_0x50 +
                          *(uint *)(&UNK_140497fc8 + (uVar9 + 0xf >> 4) * 4)))(pauVar6,-lVar10);
      return pauVar4;
    }
  }
  else if (((uVar9 <= uRam00000001404dc0e0) || (uRam00000001404dc0e8 < uVar9)) ||
          ((DAT_1404e3b5c & 2) == 0)) {
    auVar11._16_16_ = auVar11._0_16_;
    lVar10 = ((ulonglong)param_2 & 0x1f) - 0x20;
    pauVar4 = (undefined1 (*) [32])((longlong)param_2 - lVar10);
    uVar9 = uVar9 + lVar10;
    if (0x100 < uVar9) {
      if (uRam00000001404dc0e8 < uVar9) {
        do {
          uVar8 = uVar9;
          pauVar5 = pauVar4;
          auVar1 = vmovntdq_avx(auVar11);
          *pauVar5 = auVar1;
          auVar1 = vmovntdq_avx(auVar11);
          pauVar5[1] = auVar1;
          auVar1 = vmovntdq_avx(auVar11);
          pauVar5[2] = auVar1;
          auVar1 = vmovntdq_avx(auVar11);
          pauVar5[3] = auVar1;
          auVar1 = vmovntdq_avx(auVar11);
          pauVar5[4] = auVar1;
          auVar1 = vmovntdq_avx(auVar11);
          pauVar5[5] = auVar1;
          auVar1 = vmovntdq_avx(auVar11);
          pauVar5[6] = auVar1;
          auVar1 = vmovntdq_avx(auVar11);
          pauVar5[7] = auVar1;
          pauVar4 = pauVar5 + 8;
          uVar9 = uVar8 - 0x100;
        } while (0xff < uVar8 - 0x100);
        uVar9 = uVar8 - 0xe1 & 0xffffffffffffffe0;
        switch(uVar8) {
        case 0x1e1:
        case 0x1e2:
        case 0x1e3:
        case 0x1e4:
        case 0x1e5:
        case 0x1e6:
        case 0x1e7:
        case 0x1e8:
        case 0x1e9:
        case 0x1ea:
        case 0x1eb:
        case 0x1ec:
        case 0x1ed:
        case 0x1ee:
        case 0x1ef:
        case 0x1f0:
        case 0x1f1:
        case 0x1f2:
        case 499:
        case 500:
        case 0x1f5:
        case 0x1f6:
        case 0x1f7:
        case 0x1f8:
        case 0x1f9:
        case 0x1fa:
        case 0x1fb:
        case 0x1fc:
        case 0x1fd:
        case 0x1fe:
        case 0x1ff:
          auVar1 = vmovntdq_avx(auVar11);
          *(undefined1 (*) [32])(*pauVar5 + uVar9) = auVar1;
        case 0x1c1:
        case 0x1c2:
        case 0x1c3:
        case 0x1c4:
        case 0x1c5:
        case 0x1c6:
        case 0x1c7:
        case 0x1c8:
        case 0x1c9:
        case 0x1ca:
        case 0x1cb:
        case 0x1cc:
        case 0x1cd:
        case 0x1ce:
        case 0x1cf:
        case 0x1d0:
        case 0x1d1:
        case 0x1d2:
        case 0x1d3:
        case 0x1d4:
        case 0x1d5:
        case 0x1d6:
        case 0x1d7:
        case 0x1d8:
        case 0x1d9:
        case 0x1da:
        case 0x1db:
        case 0x1dc:
        case 0x1dd:
        case 0x1de:
        case 0x1df:
        case 0x1e0:
          auVar1 = vmovntdq_avx(auVar11);
          *(undefined1 (*) [32])(pauVar5[1] + uVar9) = auVar1;
        case 0x1a1:
        case 0x1a2:
        case 0x1a3:
        case 0x1a4:
        case 0x1a5:
        case 0x1a6:
        case 0x1a7:
        case 0x1a8:
        case 0x1a9:
        case 0x1aa:
        case 0x1ab:
        case 0x1ac:
        case 0x1ad:
        case 0x1ae:
        case 0x1af:
        case 0x1b0:
        case 0x1b1:
        case 0x1b2:
        case 0x1b3:
        case 0x1b4:
        case 0x1b5:
        case 0x1b6:
        case 0x1b7:
        case 0x1b8:
        case 0x1b9:
        case 0x1ba:
        case 0x1bb:
        case 0x1bc:
        case 0x1bd:
        case 0x1be:
        case 0x1bf:
        case 0x1c0:
          auVar1 = vmovntdq_avx(auVar11);
          *(undefined1 (*) [32])(pauVar5[2] + uVar9) = auVar1;
        case 0x181:
        case 0x182:
        case 0x183:
        case 0x184:
        case 0x185:
        case 0x186:
        case 0x187:
        case 0x188:
        case 0x189:
        case 0x18a:
        case 0x18b:
        case 0x18c:
        case 0x18d:
        case 0x18e:
        case 399:
        case 400:
        case 0x191:
        case 0x192:
        case 0x193:
        case 0x194:
        case 0x195:
        case 0x196:
        case 0x197:
        case 0x198:
        case 0x199:
        case 0x19a:
        case 0x19b:
        case 0x19c:
        case 0x19d:
        case 0x19e:
        case 0x19f:
        case 0x1a0:
          auVar1 = vmovntdq_avx(auVar11);
          *(undefined1 (*) [32])(pauVar5[3] + uVar9) = auVar1;
        case 0x161:
        case 0x162:
        case 0x163:
        case 0x164:
        case 0x165:
        case 0x166:
        case 0x167:
        case 0x168:
        case 0x169:
        case 0x16a:
        case 0x16b:
        case 0x16c:
        case 0x16d:
        case 0x16e:
        case 0x16f:
        case 0x170:
        case 0x171:
        case 0x172:
        case 0x173:
        case 0x174:
        case 0x175:
        case 0x176:
        case 0x177:
        case 0x178:
        case 0x179:
        case 0x17a:
        case 0x17b:
        case 0x17c:
        case 0x17d:
        case 0x17e:
        case 0x17f:
        case 0x180:
          auVar1 = vmovntdq_avx(auVar11);
          *(undefined1 (*) [32])(pauVar5[4] + uVar9) = auVar1;
        case 0x141:
        case 0x142:
        case 0x143:
        case 0x144:
        case 0x145:
        case 0x146:
        case 0x147:
        case 0x148:
        case 0x149:
        case 0x14a:
        case 0x14b:
        case 0x14c:
        case 0x14d:
        case 0x14e:
        case 0x14f:
        case 0x150:
        case 0x151:
        case 0x152:
        case 0x153:
        case 0x154:
        case 0x155:
        case 0x156:
        case 0x157:
        case 0x158:
        case 0x159:
        case 0x15a:
        case 0x15b:
        case 0x15c:
        case 0x15d:
        case 0x15e:
        case 0x15f:
        case 0x160:
          auVar1 = vmovntdq_avx(auVar11);
          *(undefined1 (*) [32])(pauVar5[5] + uVar9) = auVar1;
        case 0x121:
        case 0x122:
        case 0x123:
        case 0x124:
        case 0x125:
        case 0x126:
        case 0x127:
        case 0x128:
        case 0x129:
        case 0x12a:
        case 299:
        case 300:
        case 0x12d:
        case 0x12e:
        case 0x12f:
        case 0x130:
        case 0x131:
        case 0x132:
        case 0x133:
        case 0x134:
        case 0x135:
        case 0x136:
        case 0x137:
        case 0x138:
        case 0x139:
        case 0x13a:
        case 0x13b:
        case 0x13c:
        case 0x13d:
        case 0x13e:
        case 0x13f:
        case 0x140:
          auVar1 = vmovntdq_avx(auVar11);
          *(undefined1 (*) [32])(pauVar5[6] + uVar9) = auVar1;
        default:
          *(undefined1 (*) [32])(pauVar5[-1] + uVar8) = auVar11;
        case 0x100:
          *param_2 = auVar11;
          return param_2;
        }
      }
      do {
        *pauVar4 = auVar11;
        pauVar4[1] = auVar11;
        pauVar4[2] = auVar11;
        pauVar4[3] = auVar11;
        pauVar4[4] = auVar11;
        pauVar4[5] = auVar11;
        pauVar4[6] = auVar11;
        pauVar4[7] = auVar11;
        pauVar4 = pauVar4 + 8;
        uVar9 = uVar9 - 0x100;
      } while (0xff < uVar9);
    }
                    /* WARNING: Could not recover jumptable at 0x000140421a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar4 = (undefined1 (*) [32])
              (*(code *)(&DAT_140000080.field_0x50 +
                        *(uint *)((longlong)&IMAGE_THUNK_DATA64_140497f80.StartAddressOfRawData +
                                 (uVar9 + 0x1f >> 5) * 4)))(0,-lVar10);
    return pauVar4;
  }
  for (; uVar9 != 0; uVar9 = uVar9 - 1) {
    (*pauVar4)[0] = 0;
    pauVar4 = (undefined1 (*) [32])(*pauVar4 + 1);
  }
  return param_2;
}

