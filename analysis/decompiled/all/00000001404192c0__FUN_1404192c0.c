// Function: FUN_1404192c0
// Addr: 1404192c0
// Size: 444 bytes


undefined8 *
FUN_1404192c0(undefined *param_1,uint *param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  char cVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar4 = 0;
  puVar3 = param_1;
  FUN_1402fc370("SHAPE_PLAN",0,
                "struct hb_shape_plan_t *__cdecl hb_shape_plan_create2(struct hb_face_t *,const struct hb_segment_properties_t *,const struct hb_feature_t *,unsigned int,const int *,unsigned int,const char *const *)"
                ,0,0,0,"face=%p num_features=%u num_coords=%u shaper_list=%p",param_1,param_4,
                param_6,param_7);
  uVar5 = (undefined4)((ulonglong)puVar3 >> 0x20);
  if (((*param_2 & 0xfffffffc) == 4) &&
     (puVar2 = (undefined8 *)_calloc_base(1,0x118), puVar2 != (undefined8 *)0x0)) {
    FUN_1404217a0(puVar2,0,0x118);
    FUN_14041bd80(puVar2 + 0x15,0x10,2,&LAB_140390ab0,FUN_1403961c0);
    FUN_14041bd80(puVar2 + 0x19,0x10,2,&LAB_140390ab0,FUN_1403961c0);
    puVar2[0x1d] = 0;
    puVar2[0x1e] = 0;
    *(undefined4 *)puVar2 = 1;
    *(undefined1 *)((longlong)puVar2 + 4) = 1;
    puVar2[1] = 0;
    puVar3 = &DAT_1404def30;
    if (param_1 != (undefined *)0x0) {
      puVar3 = param_1;
    }
    if (puVar3[4] != '\0') {
      puVar3[4] = 0;
    }
    puVar2[2] = puVar3;
    cVar1 = FUN_1403e37f0(puVar2 + 3,1,puVar3,param_2,param_3,CONCAT44(uVar4,param_4),param_5,
                          CONCAT44(uVar5,param_6),param_7);
    if (cVar1 != '\0') {
      cVar1 = FUN_1403e3400(puVar2 + 0xc,puVar3,puVar2 + 3);
      if (cVar1 != '\0') {
        return puVar2;
      }
      thunk_FUN_1402d9040(puVar2[7]);
      puVar2[7] = 0;
    }
    thunk_FUN_1402d9040(puVar2);
  }
  return &DAT_14045dd10;
}

