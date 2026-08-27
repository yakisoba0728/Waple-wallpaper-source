// Function: FUN_14016ead0
// Addr: 14016ead0
// Size: 1374 bytes


void FUN_14016ead0(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 *local_res10;
  longlong local_res18;
  undefined1 local_res20;
  
  lVar8 = (longlong)param_2 - (longlong)param_1;
  local_res18 = param_3;
  local_res20 = param_4;
  do {
    local_res10 = param_2;
    if (lVar8 >> 3 < 0x21) {
      if (param_1 != param_2) {
        for (puVar14 = param_1 + 1; puVar14 != param_2; puVar14 = puVar14 + 1) {
          uVar1 = *puVar14;
          cVar7 = FUN_140038c30(uVar1,*param_1);
          if (cVar7 < '\0') {
            FUN_1404210f0(param_1 + 1,param_1,(longlong)puVar14 - (longlong)param_1);
            *param_1 = uVar1;
          }
          else {
            cVar7 = FUN_140038c30(uVar1,puVar14[-1]);
            puVar11 = puVar14;
            while (cVar7 < '\0') {
              *puVar11 = puVar11[-1];
              cVar7 = FUN_140038c30(uVar1,puVar11[-2]);
              puVar11 = puVar11 + -1;
            }
            *puVar11 = uVar1;
          }
        }
      }
      return;
    }
    uVar16 = (longlong)param_2 - (longlong)param_1;
    lVar8 = (longlong)uVar16 >> 4;
    if (param_3 < 1) {
      if (0 < lVar8) {
        lVar10 = ((longlong)uVar16 >> 3) + -1;
        lVar15 = lVar10 >> 1;
        do {
          uVar1 = param_1[lVar8 + -1];
          lVar8 = lVar8 + -1;
          lVar5 = lVar8;
          while (lVar5 < lVar15) {
            cVar7 = FUN_140038c30(param_1[lVar5 * 2 + 2],param_1[lVar5 * 2 + 1]);
            lVar12 = ((longlong)cVar7 >> 0x3f) + (lVar5 + 1) * 2;
            param_1[lVar5] = param_1[lVar12];
            lVar5 = lVar12;
          }
          if ((lVar5 == lVar15) && ((uVar16 & 8) == 0)) {
            param_1[lVar5] =
                 *(undefined8 *)(((uVar16 & 0xfffffffffffffff8) - 8) + (longlong)param_1);
            lVar5 = lVar10;
          }
          while (lVar8 < lVar5) {
            lVar12 = lVar5 + -1 >> 1;
            uVar2 = param_1[lVar12];
            cVar7 = FUN_140038c30(uVar2,uVar1);
            if (-1 < cVar7) break;
            param_1[lVar5] = uVar2;
            lVar5 = lVar12;
          }
          param_1[lVar5] = uVar1;
          param_4 = local_res20;
        } while (0 < lVar8);
      }
      puVar14 = local_res10;
      if ((longlong)uVar16 >> 3 < 2) {
        return;
      }
      do {
        if (1 < (longlong)puVar14 - (longlong)param_1 >> 3) {
          local_res10 = (undefined8 *)puVar14[-1];
          puVar14[-1] = *param_1;
          FUN_14016f2e0(param_1,0,(longlong)(puVar14 + -1) - (longlong)param_1 >> 3,&local_res10,
                        param_4);
        }
        puVar14 = puVar14 + -1;
      } while (0xf < (longlong)puVar14 - (longlong)param_1);
      return;
    }
    lVar10 = (longlong)param_2 + (-8 - (longlong)param_1) >> 3;
    puVar14 = param_1 + lVar8;
    if (lVar10 < 0x29) {
      puVar11 = param_2 + -1;
      puVar9 = param_1;
    }
    else {
      lVar10 = lVar10 + 1 >> 3;
      FUN_14016f6d0(param_1,param_1 + lVar10,param_1 + lVar10 * 2);
      FUN_14016f6d0(puVar14 + -lVar10,puVar14,param_1 + lVar8 + lVar10);
      puVar11 = param_2 + (-1 - lVar10);
      FUN_14016f6d0(param_2 + lVar10 * -2 + -1,puVar11);
      puVar9 = param_1 + lVar10;
    }
    FUN_14016f6d0(puVar9,puVar14,puVar11);
    puVar11 = puVar14 + 1;
    while (puVar9 = puVar14, param_1 < puVar9) {
      uVar1 = puVar9[-1];
      uVar2 = *puVar9;
      cVar7 = FUN_140038c30(uVar1,uVar2);
      if ((cVar7 < '\0') ||
         (cVar7 = FUN_140038c30(uVar2,uVar1), puVar14 = puVar9 + -1, cVar7 < '\0')) break;
    }
    puVar3 = puVar11;
    puVar4 = local_res10;
    puVar14 = puVar9;
    if (puVar11 < param_2) {
      uVar1 = *puVar9;
      do {
        uVar2 = *puVar11;
        cVar7 = FUN_140038c30(uVar2,uVar1);
        puVar3 = puVar11;
        puVar4 = local_res10;
        if ((cVar7 < '\0') ||
           (cVar7 = FUN_140038c30(uVar1,uVar2), puVar4 = local_res10, cVar7 < '\0')) break;
        puVar11 = puVar11 + 1;
        puVar3 = puVar11;
      } while (puVar11 < param_2);
    }
joined_r0x00014016ec4b:
    if (puVar3 < puVar4) {
      uVar1 = *puVar3;
      uVar2 = *puVar9;
      cVar7 = FUN_140038c30(uVar2,uVar1);
      if (-1 < cVar7) {
        cVar7 = FUN_140038c30(uVar1,uVar2);
        if (cVar7 < '\0') goto joined_r0x00014016ec92;
        if (puVar11 != puVar3) {
          uVar2 = *puVar11;
          *puVar11 = uVar1;
          *puVar3 = uVar2;
        }
        puVar11 = puVar11 + 1;
      }
      puVar3 = puVar3 + 1;
      goto joined_r0x00014016ec4b;
    }
joined_r0x00014016ec92:
    while (puVar6 = puVar14, param_1 < puVar6) {
      uVar1 = puVar6[-1];
      puVar14 = puVar6 + -1;
      cVar7 = FUN_140038c30(uVar1,*puVar9);
      if (-1 < cVar7) {
        cVar7 = FUN_140038c30(*puVar9,uVar1);
        if (cVar7 < '\0') break;
        if (puVar6 != puVar9) {
          uVar2 = puVar9[-1];
          puVar9[-1] = uVar1;
          *puVar14 = uVar2;
        }
        puVar9 = puVar9 + -1;
      }
    }
    param_4 = local_res20;
    if (puVar6 != param_1) {
      puVar14 = puVar6 + -1;
      if (puVar3 == puVar4) {
        puVar13 = puVar9 + -1;
        if (puVar9 != puVar6) {
          uVar1 = *puVar14;
          *puVar14 = *puVar13;
          *puVar13 = uVar1;
        }
        puVar9 = puVar11 + -1;
        puVar11 = puVar11 + -1;
        uVar1 = *puVar13;
        *puVar13 = *puVar9;
        *puVar11 = uVar1;
        puVar9 = puVar13;
      }
      else {
        uVar1 = *puVar3;
        *puVar3 = *puVar14;
        *puVar14 = uVar1;
        puVar3 = puVar3 + 1;
      }
      goto joined_r0x00014016ec4b;
    }
    if (puVar3 != puVar4) {
      if (puVar11 != puVar3) {
        uVar1 = *puVar9;
        *puVar9 = *puVar11;
        *puVar11 = uVar1;
      }
      puVar11 = puVar11 + 1;
      uVar1 = *puVar9;
      *puVar9 = *puVar3;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
      puVar9 = puVar9 + 1;
      puVar14 = puVar6;
      goto joined_r0x00014016ec4b;
    }
    param_3 = (local_res18 >> 2) + (local_res18 >> 1);
    local_res18 = param_3;
    if ((longlong)puVar9 - (longlong)param_1 >> 3 < (longlong)puVar4 - (longlong)puVar11 >> 3) {
      FUN_14016ead0(param_1,puVar9,param_3,local_res20);
      param_1 = puVar11;
    }
    else {
      FUN_14016ead0(puVar11,local_res10,param_3,local_res20);
      local_res10 = puVar9;
    }
    lVar8 = (longlong)local_res10 - (longlong)param_1;
    param_2 = local_res10;
  } while( true );
}

