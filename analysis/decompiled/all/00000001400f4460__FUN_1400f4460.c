// Function: FUN_1400f4460
// Addr: 1400f4460
// Size: 461 bytes


ulonglong FUN_1400f4460(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  char *_Str;
  ulonglong uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  size_t sVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  byte bVar10;
  uint uVar11;
  ulonglong uVar12;
  
  uVar12 = 0;
  do {
    _Str = (&PTR_s_a_Position_140484a90)[uVar12];
    sVar6 = strlen(_Str);
    puVar9 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar9 = (undefined8 *)*param_1;
    }
    uVar7 = sVar6;
    if (sVar6 <= (ulonglong)param_1[2]) {
      if (sVar6 == 0) {
        uVar7 = 0;
      }
      else {
        uVar8 = param_1[2] + (longlong)puVar9;
        uVar7 = thunk_FUN_14028e750(puVar9,uVar8,_Str,sVar6);
        if ((uVar7 == uVar8) || (uVar7 = uVar7 - (longlong)puVar9, uVar7 == 0xffffffffffffffff))
        goto LAB_1400f45ef;
      }
      do {
        if (uVar7 == 0) {
LAB_1400f452c:
          bVar4 = true;
        }
        else {
          puVar9 = param_1;
          if (0xf < (ulonglong)param_1[3]) {
            puVar9 = (undefined8 *)*param_1;
          }
          cVar1 = *(char *)((longlong)puVar9 + (uVar7 - 1));
          if ((0x19 < (byte)(cVar1 + 0x9fU)) &&
             ((bVar10 = cVar1 - 0x30, 0x2f < bVar10 ||
              ((0x87fffffe03ffU >> ((longlong)(char)bVar10 & 0x3fU) & 1) == 0))))
          goto LAB_1400f452c;
          bVar4 = false;
        }
        uVar2 = param_1[2];
        uVar8 = uVar7 + sVar6;
        if (uVar8 == uVar2) {
LAB_1400f4574:
          bVar5 = true;
        }
        else {
          puVar9 = param_1;
          if (0xf < (ulonglong)param_1[3]) {
            puVar9 = (undefined8 *)*param_1;
          }
          cVar1 = *(char *)((longlong)puVar9 + sVar6 + uVar7);
          if ((0x19 < (byte)(cVar1 + 0x9fU)) &&
             ((bVar10 = cVar1 - 0x30, 0x2f < bVar10 ||
              ((0x87fffffe03ffU >> ((ulonglong)bVar10 & 0x3f) & 1) == 0)))) goto LAB_1400f4574;
          bVar5 = false;
        }
        if ((bVar4) && (bVar5)) {
          uVar3 = *(undefined8 *)(&UNK_140482fa8 + uVar12 * 0x10);
          *param_2 = *(undefined8 *)(&DAT_140482fa0 + uVar12 * 0x10);
          param_2[1] = uVar3;
          return CONCAT71((int7)(uVar12 * 2 >> 8),1);
        }
        uVar7 = strlen(_Str);
        puVar9 = param_1;
        if (0xf < (ulonglong)param_1[3]) {
          puVar9 = (undefined8 *)*param_1;
        }
        if ((uVar2 < uVar7) || (uVar2 - uVar7 < uVar8)) goto LAB_1400f45ef;
        if (uVar7 != 0) {
          uVar7 = thunk_FUN_14028e750((longlong)puVar9 + uVar8,uVar2 + (longlong)puVar9,_Str,uVar7);
          if (uVar7 == uVar2 + (longlong)puVar9) goto LAB_1400f45ef;
          uVar8 = uVar7 - (longlong)puVar9;
        }
        uVar7 = uVar8;
      } while (uVar8 != 0xffffffffffffffff);
      uVar7 = 0xffffffffffffffff;
    }
LAB_1400f45ef:
    uVar11 = (int)uVar12 + 1;
    uVar12 = (ulonglong)uVar11;
    if (0x19 < (int)uVar11) {
      return uVar7 & 0xffffffffffffff00;
    }
  } while( true );
}

