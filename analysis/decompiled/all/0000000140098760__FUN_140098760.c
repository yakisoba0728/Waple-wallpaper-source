// Function: FUN_140098760
// Addr: 140098760
// Size: 454 bytes


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_140098760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  size_t sVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_40b8 [8];
  undefined1 auStack_40b0 [24];
  undefined8 local_4098;
  undefined8 *local_4090;
  longlong local_4088;
  undefined8 uStack_4080;
  undefined8 local_4078;
  ulonglong local_4070;
  longlong local_4068 [7];
  longlong *local_4030;
  undefined4 local_4028;
  char local_4018 [16383];
  undefined1 local_19;
  
  puVar9 = auStack_40b8;
  if (0 < DAT_1404e52b8) {
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    puVar5 = (undefined8 *)FUN_140016300();
    local_4098 = 0;
    local_4090 = &local_res10;
    FUN_1402c7d8c(*puVar5,local_4018,0x4000,param_1);
    local_19 = 0;
    lVar3 = DAT_1404e8d48;
    lVar7 = DAT_1404e8d50;
    if ((DAT_1404e5294 != '\0') && (0 < DAT_1404e52b8)) {
      FUN_140098350(local_4018);
      lVar3 = DAT_1404e8d48;
      lVar7 = DAT_1404e8d50;
    }
    for (; lVar4 = DAT_1404e8d50, bVar2 = lVar3 != DAT_1404e8d50, DAT_1404e8d50 = lVar7, bVar2;
        lVar3 = lVar3 + 0x48) {
      puVar5 = *(undefined8 **)(lVar3 + 0x38);
      local_4030 = (longlong *)0x0;
      if (puVar5 != (undefined8 *)0x0) {
        local_4030 = (longlong *)(**(code **)*puVar5)(puVar5,local_4068);
      }
      local_4028 = *(undefined4 *)(lVar3 + 0x40);
      local_4088 = 0;
      uStack_4080 = 0;
      local_4078 = 0;
      local_4070 = 0;
      sVar6 = strlen(local_4018);
      FUN_140017480(&local_4088,local_4018,sVar6);
      if (local_4030 == (longlong *)0x0) {
LAB_140098921:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar9 + -8) = &UNK_140098926;
        FUN_14028c2c0();
      }
      (**(code **)(*local_4030 + 0x10))(local_4030,&local_4088);
      if (0xf < local_4070) {
        uVar8 = local_4070 + 1;
        lVar7 = local_4088;
        if (0xfff < uVar8) {
          lVar7 = *(longlong *)(local_4088 + -8);
          if (0x1f < (local_4088 - lVar7) - 8U) {
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            puVar9 = auStack_40b0;
            goto LAB_140098921;
          }
          uVar8 = local_4070 + 0x28;
        }
        thunk_FUN_14028af80(lVar7,uVar8);
      }
      if (local_4030 != (longlong *)0x0) {
        (**(code **)(*local_4030 + 0x20))(local_4030,local_4030 != local_4068);
      }
      lVar7 = DAT_1404e8d50;
      DAT_1404e8d50 = lVar4;
    }
  }
  return;
}

