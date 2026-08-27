// Function: FUN_140419480
// Addr: 140419480
// Size: 1378 bytes


/* WARNING: Type propagation algorithm not settling */

int * FUN_140419480(int *param_1,int *param_2,longlong param_3,uint param_4,undefined8 param_5,
                   undefined4 param_6,undefined8 *param_7)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  char *_Str1;
  code *pcVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int *piVar14;
  undefined8 *puVar15;
  code *pcVar16;
  undefined8 *puVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  bool bVar22;
  int local_6c [11];
  
  FUN_1402fc370("SHAPE_PLAN",0,
                "struct hb_shape_plan_t *__cdecl hb_shape_plan_create_cached2(struct hb_face_t *,const struct hb_segment_properties_t *,const struct hb_feature_t *,unsigned int,const int *,unsigned int,const char *const *)"
                ,0,0,0,"face=%p num_features=%u shaper_list=%p",param_1,param_4,param_7);
  do {
    puVar6 = *(undefined8 **)(param_1 + 0x70);
    iVar3 = *param_1;
    if (0 < iVar3) {
      iVar4 = *param_2;
      lVar19 = 0;
      iVar5 = param_2[1];
      lVar7 = *(longlong *)(param_2 + 2);
      lVar8 = *(longlong *)(param_2 + 4);
      lVar9 = *(longlong *)(param_2 + 6);
      do {
        FUN_140417a60(param_1,(&DAT_1404621a0)[lVar19],param_5,param_6,local_6c + lVar19);
        lVar19 = lVar19 + 1;
      } while (lVar19 != 2);
      puVar15 = puVar6;
      if (param_7 == (undefined8 *)0x0) {
        lVar19 = FUN_1403ceab0(&DAT_1404e5218);
        uVar20 = 0;
        do {
          pcVar10 = *(code **)(lVar19 + 0x10 + uVar20 * 0x18);
          pcVar16 = FUN_14035d1b0;
          if (pcVar10 == FUN_14035d1b0) {
            while( true ) {
              if (*(longlong *)(param_1 + 0x16) != 0) goto joined_r0x000140419705;
              if (*(longlong *)(param_1 + 0x14) == 0) break;
              LOCK();
              bVar22 = *(longlong *)(param_1 + 0x16) == 0;
              if (bVar22) {
                *(longlong *)(param_1 + 0x16) = 1;
              }
              UNLOCK();
              if (bVar22) goto joined_r0x000140419705;
            }
          }
          else if (pcVar10 == FUN_14035d200) {
            lVar13 = FUN_1403ce760(param_1 + 0x18);
            if (lVar13 != 0) goto LAB_1404196a1;
          }
          else {
            pcVar16 = FUN_14035dc50;
            if (pcVar10 == FUN_14035dc50) {
              while( true ) {
                if (*(longlong *)(param_1 + 0x1a) != 0) goto joined_r0x000140419705;
                if (*(longlong *)(param_1 + 0x14) == 0) break;
                LOCK();
                bVar22 = *(longlong *)(param_1 + 0x1a) == 0;
                if (bVar22) {
                  *(longlong *)(param_1 + 0x1a) = 1;
                }
                UNLOCK();
                if (bVar22) goto joined_r0x000140419705;
              }
            }
          }
          uVar18 = (int)uVar20 + 1;
          uVar20 = (ulonglong)uVar18;
          if (2 < uVar18) {
            thunk_FUN_1402d9040(0);
            return (int *)&DAT_14045dd10;
          }
        } while( true );
      }
      _Str1 = (char *)*param_7;
      puVar17 = param_7;
      do {
        if (_Str1 == (char *)0x0) {
          thunk_FUN_1402d9040(0);
          return (int *)&DAT_14045dd10;
        }
        if (((*_Str1 == 'o') && (_Str1[1] == 't')) && (_Str1[2] == '\0')) {
LAB_140419600:
          if (*(longlong *)(param_1 + 0x16) != 0) goto LAB_140419618;
          if (*(longlong *)(param_1 + 0x14) != 0) goto code_r0x000140419610;
          goto LAB_140419645;
        }
        iVar11 = strcmp(_Str1,"directwrite");
        if (iVar11 == 0) {
          lVar19 = FUN_1403ce760(param_1 + 0x18);
          if (lVar19 != 0) goto LAB_1404196a1;
        }
        else {
          iVar11 = strcmp(_Str1,"fallback");
          if (iVar11 == 0) {
LAB_140419680:
            if (*(longlong *)(param_1 + 0x1a) != 0) goto LAB_140419698;
            if (*(longlong *)(param_1 + 0x14) != 0) goto code_r0x000140419690;
          }
        }
LAB_140419645:
        _Str1 = (char *)puVar17[1];
        puVar17 = puVar17 + 1;
      } while( true );
    }
LAB_1404198cd:
    piVar14 = (int *)FUN_1404192c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    if (iVar3 < 1) {
      return piVar14;
    }
    puVar15 = (undefined8 *)_calloc_base(1,0x10);
    if (puVar15 == (undefined8 *)0x0) {
      return piVar14;
    }
    *puVar15 = piVar14;
    puVar15[1] = puVar6;
    LOCK();
    bVar22 = puVar6 == *(undefined8 **)(param_1 + 0x70);
    if (bVar22) {
      *(undefined8 **)(param_1 + 0x70) = puVar15;
    }
    UNLOCK();
    if (bVar22) {
      if ((piVar14 != (int *)0x0) && (*piVar14 != 0)) {
        LOCK();
        *piVar14 = *piVar14 + 1;
        UNLOCK();
      }
      return piVar14;
    }
    if ((piVar14 != (int *)0x0) && (*piVar14 != 0)) {
      LOCK();
      iVar3 = *piVar14;
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        *piVar14 = -0xdead;
        lVar7 = *(longlong *)(piVar14 + 2);
        if (lVar7 != 0) {
          FUN_1403c3220(lVar7);
          thunk_FUN_1402d9040(lVar7);
          piVar14[2] = 0;
          piVar14[3] = 0;
        }
        thunk_FUN_1402d9040(*(undefined8 *)(piVar14 + 0xe));
        piVar14[0xe] = 0;
        piVar14[0xf] = 0;
        FUN_140397460(piVar14 + 0x18);
        thunk_FUN_1402d9040(piVar14);
      }
    }
    thunk_FUN_1402d9040(puVar15);
  } while( true );
code_r0x000140419610:
  LOCK();
  bVar22 = *(longlong *)(param_1 + 0x16) == 0;
  if (bVar22) {
    *(longlong *)(param_1 + 0x16) = 1;
  }
  UNLOCK();
  if (bVar22) {
LAB_140419618:
    pcVar16 = FUN_14035d1b0;
    goto joined_r0x000140419705;
  }
  goto LAB_140419600;
code_r0x000140419690:
  LOCK();
  bVar22 = *(longlong *)(param_1 + 0x1a) == 0;
  if (bVar22) {
    *(longlong *)(param_1 + 0x1a) = 1;
  }
  UNLOCK();
  if (bVar22) {
LAB_140419698:
    pcVar16 = FUN_14035dc50;
    goto joined_r0x000140419705;
  }
  goto LAB_140419680;
LAB_1404196a1:
  pcVar16 = FUN_14035d200;
joined_r0x000140419705:
  do {
    if (puVar15 == (undefined8 *)0x0) goto LAB_1404198cd;
    piVar14 = (int *)*puVar15;
    if ((((piVar14[6] == iVar4) && (piVar14[7] == iVar5)) &&
        ((*(longlong *)(piVar14 + 8) == lVar7 &&
         ((*(longlong *)(piVar14 + 10) == lVar8 && (*(longlong *)(piVar14 + 0xc) == lVar9)))))) &&
       (uVar18 = piVar14[0x10], uVar18 == param_4)) {
      if (uVar18 != 0) {
        uVar20 = 0;
        do {
          piVar1 = (int *)(param_3 + uVar20 * 0x10);
          piVar2 = (int *)(*(longlong *)(piVar14 + 0xe) + uVar20 * 0x10);
          if ((*piVar2 != *piVar1) || (piVar2[1] != piVar1[1])) goto LAB_14041989c;
          if ((piVar2[2] == 0) && (piVar2[3] == -1)) {
            iVar11 = 1;
          }
          else {
            iVar11 = 0;
          }
          if ((piVar1[2] == 0) && (piVar1[3] == -1)) {
            iVar12 = 1;
          }
          else {
            iVar12 = 0;
          }
          if (iVar11 != iVar12) goto LAB_14041989c;
          uVar21 = (int)uVar20 + 1;
          uVar20 = (ulonglong)uVar21;
        } while (uVar21 < uVar18);
      }
      if (((piVar14[0x11] == local_6c[0]) && (piVar14[0x12] == local_6c[1])) &&
         (*(code **)(piVar14 + 0x14) == pcVar16)) {
        if (piVar14 == (int *)0x0) {
          return (int *)0x0;
        }
        if (*piVar14 != 0) {
          LOCK();
          *piVar14 = *piVar14 + 1;
          UNLOCK();
          return piVar14;
        }
        return piVar14;
      }
    }
LAB_14041989c:
    puVar15 = (undefined8 *)puVar15[1];
  } while( true );
}

