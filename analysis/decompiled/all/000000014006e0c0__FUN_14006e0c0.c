// Function: FUN_14006e0c0
// Addr: 14006e0c0
// Size: 1538 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14006e0c0(void)

{
  undefined8 *puVar1;
  byte *pbVar2;
  longlong *plVar3;
  bool bVar4;
  undefined8 *puVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined *puVar19;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [8];
  char local_a0;
  undefined1 local_80 [40];
  undefined1 local_58 [48];
  
  puVar1 = DAT_1404e5330;
  bVar18 = DAT_1404e5618 != 0;
  bVar8 = false;
  puVar5 = DAT_1404e5330;
  lVar11 = DAT_1404e5370;
  uVar6 = DAT_1404e52e8;
  for (puVar14 = (undefined8 *)*DAT_1404e5330; DAT_1404e52e8 = uVar6, DAT_1404e5330 = puVar5,
      DAT_1404e5370 = lVar11, puVar14 != puVar1; puVar14 = (undefined8 *)*puVar14) {
    if (bVar8) {
LAB_14006e1ef:
      bVar8 = true;
    }
    else {
      plVar3 = (longlong *)puVar14[6];
      if ((plVar3 != (longlong *)0x0) && (cVar7 = FUN_14010d100(), cVar7 != '\0')) {
        uVar10 = (**(code **)(*plVar3 + 0x98))(plVar3,local_58);
        uVar10 = FUN_140086de0(uVar10,"wproperties","");
        FUN_140085090(local_80,uVar10);
        FUN_140085440(local_58);
        uVar10 = FUN_140086de0(local_80,"audioprocessing","");
        FUN_140085090(local_a8,uVar10);
        if (local_a0 == '\a') {
          lVar11 = FUN_140086de0(local_a8,"value","");
          if (*(char *)(lVar11 + 8) == '\x05') {
            uVar10 = FUN_140086de0(local_a8,"value","");
            cVar7 = FUN_140086300(uVar10);
            if (cVar7 != '\0') goto LAB_14006e1d0;
          }
          bVar8 = false;
        }
        else {
LAB_14006e1d0:
          bVar8 = true;
        }
        FUN_140085440(local_a8);
        FUN_140085440();
        if (bVar8) goto LAB_14006e1ef;
      }
      bVar8 = false;
    }
    puVar5 = DAT_1404e5330;
    lVar11 = DAT_1404e5370;
    uVar6 = DAT_1404e52e8;
  }
  bVar4 = true;
  puVar1 = DAT_1404e63d0;
  for (puVar14 = (undefined8 *)*puVar5; DAT_1404e63d0 = puVar1, puVar14 != puVar5;
      puVar14 = (undefined8 *)*puVar14) {
    if (puVar14[6] != 0) {
      puVar1 = puVar14 + 2;
      puVar16 = puVar1;
      if (0xf < (ulonglong)puVar14[5]) {
        puVar16 = (undefined8 *)*puVar1;
      }
      uVar15 = 0;
      uVar17 = 0xcbf29ce484222325;
      if (puVar14[4] != 0) {
        do {
          pbVar2 = (byte *)((longlong)puVar16 + uVar15);
          uVar15 = uVar15 + 1;
          uVar17 = (uVar17 ^ *pbVar2) * 0x100000001b3;
        } while (uVar15 < (ulonglong)puVar14[4]);
      }
      lVar12 = FUN_1400110a0(&DAT_1404e5368,&local_b8,puVar1,uVar17);
      lVar13 = lVar11;
      if (*(longlong *)(lVar12 + 8) != 0) {
        lVar13 = *(longlong *)(lVar12 + 8);
      }
      if (((bVar4) && (lVar13 != lVar11)) && ((uVar6 >> (*(byte *)(lVar13 + 0x51) & 0x1f) & 1) != 0)
         ) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
    }
    puVar1 = DAT_1404e63d0;
  }
  if ((!bVar8) || ((DAT_1404e52e4 & 0x121) != 0 || bVar4)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  puVar14 = (undefined8 *)*puVar1;
  do {
    if (puVar14 == puVar1) {
      if (bVar18 != bVar8) {
        if (bVar8 != false) {
          puVar14 = &DAT_1404e5580;
          if (0xf < DAT_1404e5598) {
            puVar14 = DAT_1404e5580;
          }
          FUN_14000f880(&DAT_1404e56a8,puVar14,DAT_1404e5590);
          puVar19 = &DAT_1404e569c;
          DAT_1404e56a4 =
               FUN_1400cf120(&DAT_1404e568c,&DAT_1404e5580,&DAT_1404e5688,&DAT_1404e55b0,
                             &DAT_1404e569c,&DAT_1404e56a0,&DAT_1404e5670,&DAT_1404e5678,
                             &DAT_1404e5680);
          if (DAT_1404e56a4 == '\0') {
            DAT_1404e56d0 = 1;
            puVar14 = (undefined8 *)FUN_14028af20(0x10);
            *puVar14 = &DAT_1404e55a8;
            puVar14[1] = FUN_1400d02b0;
            local_b8 = FUN_1402ca17c(0,0,FUN_140082eb0,puVar14,
                                     (ulonglong)puVar19 & 0xffffffff00000000,&local_b0);
            if (local_b8 == 0) {
              local_b0 = 0;
                    /* WARNING: Subroutine does not return */
              FUN_140290d30(6);
            }
            if (DAT_1404e5618 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_140015110();
            }
          }
          else {
            (**(code **)(*DAT_1404e5670 + 0x30))(DAT_1404e5670,DAT_1404e56c8);
            puVar14 = (undefined8 *)FUN_14028af20(0x10);
            *puVar14 = &DAT_1404e55a8;
            puVar14[1] = FUN_1400d02b0;
            local_b8 = FUN_1402ca17c(0,0,FUN_140082eb0,puVar14,
                                     (ulonglong)puVar19 & 0xffffffff00000000,&local_b0);
            if (local_b8 == 0) {
              local_b0 = 0;
                    /* WARNING: Subroutine does not return */
              FUN_140290d30(6);
            }
            if (DAT_1404e5618 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_140015110();
            }
          }
          DAT_1404e5618 = local_b0;
          _DAT_1404e561c = local_ac;
          _DAT_1404e5610 = local_b8;
          return;
        }
        if (DAT_1404e5618 != 0) {
          iVar9 = FUN_140290d80(&DAT_1404e5620);
          if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_140290d30(5);
          }
          if (DAT_1404e566c == 0x7fffffff) {
            DAT_1404e566c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
            FUN_140290d30(6);
          }
          FUN_1400150a0(&DAT_1404e5610);
          FUN_140290ea0(&DAT_1404e5620);
        }
        if ((DAT_1404e56a4 != '\0') && (DAT_1404e56a4 = '\0', DAT_1404e5678 != 0)) {
          if (DAT_1404e5670 != (longlong *)0x0) {
            (**(code **)(*DAT_1404e5670 + 0x38))(DAT_1404e5670,DAT_1404e56c8);
          }
          FUN_1400cf970();
        }
      }
      return;
    }
    if (bVar8 == false) {
      plVar3 = *(longlong **)puVar14[6];
      if ((plVar3 != (longlong *)0x0) && (cVar7 = FUN_14010d100(plVar3), cVar7 != '\0')) {
        uVar10 = (**(code **)(*plVar3 + 0x98))(plVar3,local_58);
        uVar10 = FUN_140086de0(uVar10,"wproperties","");
        FUN_140085090(local_80,uVar10);
        FUN_140085440(local_58);
        uVar10 = FUN_140086de0(local_80,"audioprocessing","");
        FUN_140085090(local_a8,uVar10);
        if (local_a0 == '\a') {
          lVar11 = FUN_140086de0(local_a8,"value","");
          if (*(char *)(lVar11 + 8) == '\x05') {
            uVar10 = FUN_140086de0(local_a8,"value","");
            cVar7 = FUN_140086300(uVar10);
            if (cVar7 != '\0') goto LAB_14006e408;
          }
          bVar8 = false;
        }
        else {
LAB_14006e408:
          bVar8 = true;
        }
        FUN_140085440(local_a8);
        FUN_140085440(local_80);
        if (bVar8) goto LAB_14006e426;
      }
      bVar8 = false;
    }
    else {
LAB_14006e426:
      bVar8 = true;
    }
    puVar14 = (undefined8 *)*puVar14;
  } while( true );
}

