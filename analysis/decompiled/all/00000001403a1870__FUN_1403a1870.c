// Function: FUN_1403a1870
// Addr: 1403a1870
// Size: 424 bytes


undefined8
FUN_1403a1870(int *param_1,longlong param_2,longlong param_3,undefined8 param_4,undefined4 param_5)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  lVar3 = 0;
  uVar7 = 0;
  piVar5 = param_1;
  iVar2 = FUN_1402fc370("SHAPE_PLAN",param_1,
                        "bool __cdecl _hb_shape_plan_execute_internal(struct hb_shape_plan_t *,struct hb_font_t *,struct hb_buffer_t *,const struct hb_feature_t *,unsigned int)"
                        ,0,0,0,"num_features=%u shaper_func=%p, shaper_name=%s",param_5,
                        *(undefined8 *)(param_1 + 0x14),*(undefined8 *)(param_1 + 0x16));
  uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (*(int *)(param_3 + 0x60) == iVar2) {
LAB_1403a1929:
    uVar7 = 1;
  }
  else {
    if (0 < *piVar5) {
      pcVar1 = *(code **)(piVar5 + 0x14);
      if (pcVar1 == FUN_14035d1b0) {
        lVar3 = FUN_1403cea00(param_2 + 0xb0);
        if (lVar3 != 0) {
          iVar2 = FUN_14035d1b0(param_1,param_2,param_3,param_4,CONCAT44(uVar8,param_5));
joined_r0x0001403a19fa:
          if (iVar2 != 0) goto LAB_1403a1929;
        }
      }
      else if (pcVar1 == FUN_14035d200) {
        lVar3 = *(longlong *)(param_2 + 0xb8);
        while (lVar3 == 0) {
          if (*(longlong *)(param_2 + 0xa8) == 0) goto LAB_1403a1a00;
          plVar4 = (longlong *)FUN_140413ae0();
          uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
          LOCK();
          bVar6 = *(longlong *)(param_2 + 0xb8) == 0;
          if (bVar6) {
            *(longlong *)(param_2 + 0xb8) = (longlong)plVar4;
          }
          UNLOCK();
          if (bVar6) {
            if (plVar4 == (longlong *)0x0) goto LAB_1403a1a00;
            break;
          }
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x10))();
          }
          uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
          lVar3 = *(longlong *)(param_2 + 0xb8);
        }
        iVar2 = FUN_14035d200(param_1,param_2,param_3,param_4,CONCAT44(uVar8,param_5));
        if (iVar2 != 0) {
          return 1;
        }
      }
      else if (pcVar1 == FUN_14035dc50) {
        do {
          if (*(longlong *)(param_2 + 0xc0) != 0) break;
          if (*(longlong *)(param_2 + 0xa8) == lVar3) goto LAB_1403a1a00;
          LOCK();
          bVar6 = *(longlong *)(param_2 + 0xc0) == 0;
          if (bVar6) {
            *(longlong *)(param_2 + 0xc0) = 1;
          }
          UNLOCK();
        } while (!bVar6);
        iVar2 = FUN_14035dc50(param_1,param_2,param_3,param_4,CONCAT44(uVar8,param_5));
        goto joined_r0x0001403a19fa;
      }
    }
LAB_1403a1a00:
    uVar7 = 0;
  }
  return uVar7;
}

