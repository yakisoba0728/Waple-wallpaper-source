// Function: FUN_1400f5d80
// Addr: 1400f5d80
// Size: 1544 bytes


void FUN_1400f5d80(undefined8 param_1,undefined8 param_2,int param_3,longlong param_4,
                  undefined8 param_5,longlong *param_6)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  longlong lVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar11;
  undefined1 local_res20 [8];
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined1 local_528 [32];
  undefined1 local_508 [32];
  undefined1 local_4e8 [32];
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined1 local_4b8 [16];
  undefined4 local_4a8 [2];
  undefined1 local_4a0 [32];
  undefined8 local_480;
  ulonglong uStack_478;
  longlong local_468;
  longlong lStack_460;
  undefined8 local_458;
  undefined1 local_450 [32];
  undefined1 local_430 [32];
  longlong local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  longlong local_380;
  longlong lStack_378;
  undefined8 local_370;
  undefined1 local_328 [16];
  undefined1 local_318 [240];
  undefined1 local_228 [16];
  undefined1 local_218 [240];
  undefined1 local_128 [240];
  
  local_3a8 = 0;
  local_458 = 0;
  local_400 = 0;
  local_3b8 = 0;
  uStack_3b0 = 0;
  local_370 = 0;
  local_468 = 0;
  lStack_460 = 0;
  local_410 = 0;
  uStack_408 = 0;
  local_380 = 0;
  lStack_378 = 0;
  FUN_140053080(param_5,*(undefined8 *)(param_4 + 0x10));
  FUN_1400de810(local_128,param_4);
  FUN_140017070(local_430);
  plVar3 = (longlong *)func_0x0001400dcb20(local_128,local_430);
  cVar2 = func_0x0001400ea640((longlong)*(int *)(*plVar3 + 4) + (longlong)plVar3);
  while (cVar2 != '\0') {
    puVar4 = (undefined4 *)func_0x0001400171a0(local_450,"attribute");
    local_4c8 = *puVar4;
    uStack_4c4 = puVar4[1];
    uStack_4c0 = puVar4[2];
    uStack_4bc = puVar4[3];
    cVar2 = FUN_1400f9060(local_430,&local_4c8);
    if (cVar2 == '\0') {
      puVar4 = (undefined4 *)func_0x0001400171a0(local_4e8,"varying");
      local_4c8 = *puVar4;
      uStack_4c4 = puVar4[1];
      uStack_4c0 = puVar4[2];
      uStack_4bc = puVar4[3];
      cVar2 = FUN_1400f9060(local_430,&local_4c8);
      if (cVar2 == '\0') {
        puVar4 = (undefined4 *)func_0x0001400171a0(local_508,&DAT_140487698);
        local_4c8 = *puVar4;
        uStack_4c4 = puVar4[1];
        uStack_4c0 = puVar4[2];
        uStack_4bc = puVar4[3];
        cVar2 = FUN_1400f9060(local_430,&local_4c8);
        if (cVar2 != '\0') goto LAB_1400f5f8f;
        puVar4 = (undefined4 *)func_0x0001400171a0(local_528,&DAT_14048769c);
        local_4c8 = *puVar4;
        uStack_4c4 = puVar4[1];
        uStack_4c0 = puVar4[2];
        uStack_4bc = puVar4[3];
        cVar2 = FUN_1400f9060(local_430,&local_4c8);
        if (cVar2 != '\0') goto LAB_1400f5f8f;
        puVar4 = (undefined4 *)func_0x0001400171a0(&local_568,"uniform");
        local_4c8 = *puVar4;
        uStack_4c4 = puVar4[1];
        uStack_4c0 = puVar4[2];
        uStack_4bc = puVar4[3];
        cVar2 = FUN_1400f9060(local_430,&local_4c8);
        if (cVar2 == '\0') {
          FUN_140053400(param_5,local_430);
          FUN_14007ad40(param_5,&DAT_1404737b4);
          goto LAB_1400f5fe5;
        }
        FUN_1400f85f0(local_4a8);
        cVar2 = func_0x0001400f48e0(param_2,local_430,local_4a8);
        if (cVar2 == '\0') goto LAB_1400f5fdc;
        plVar3 = &local_410;
      }
      else {
LAB_1400f5f8f:
        FUN_1400f85f0(local_4a8);
        cVar2 = func_0x0001400f48e0(param_2,local_430,local_4a8);
        lVar10 = DAT_1404e7f68;
        if (cVar2 == '\0') goto LAB_1400f5fdc;
        plVar5 = (longlong *)FUN_1400f8ec0(extraout_XMM0_Da,local_res20,local_4a0);
        plVar3 = &local_380;
        if (*plVar5 == lVar10) {
          plVar3 = &local_468;
        }
      }
      FUN_1400f86f0(plVar3,local_4a8);
LAB_1400f5fdc:
                    /* WARNING: Subroutine does not return */
      FUN_140017310(local_4a0);
    }
    cVar2 = FUN_1400f4530(local_430,local_4b8);
    if (cVar2 != '\0') {
      FUN_1400f86c0(&local_3b8,local_4b8);
    }
LAB_1400f5fe5:
    plVar3 = (longlong *)func_0x0001400dcb20(local_128,local_430);
    cVar2 = func_0x0001400ea640((longlong)*(int *)(*plVar3 + 4) + (longlong)plVar3);
  }
  if (param_3 == 0) {
    local_4a8[0] = 3;
    func_0x000140017240(local_4a0,"gl_Position");
    local_480 = 0;
    uStack_478 = 0;
    func_0x0001400f8930(&local_468,local_4a8);
                    /* WARNING: Subroutine does not return */
    FUN_140017310(local_4a0);
  }
  if (param_6 != (longlong *)0x0) {
    if (param_3 == 0) {
      plVar3 = param_6;
      param_6 = &local_468;
    }
    else {
      if (param_3 == 1) {
        local_558 = 0;
        local_568 = 0;
        uStack_560 = 0;
        if (*param_6 != param_6[1]) {
          FUN_1400f8610(local_4a8,*param_6);
          uStack_478 = CONCAT44(uStack_478._4_4_,1);
          FUN_1400f86f0(&local_568,local_4a8);
                    /* WARNING: Subroutine does not return */
          FUN_140017310(local_4a0);
        }
        FUN_1400f8a20(param_6);
        if (local_468 != lStack_460) {
          FUN_1400f8610(local_4a8,local_468);
          if ((int)uStack_478 == 2) {
            FUN_1400f86f0(&local_568,local_4a8);
            uStack_478 = uStack_478 & 0xffffffff00000000;
            FUN_1400f86f0(param_6,local_4a8);
          }
                    /* WARNING: Subroutine does not return */
          FUN_140017310(local_4a0);
        }
        FUN_1400f8a70(&local_468,&local_568);
        func_0x0001400f8d90(&local_568);
        goto LAB_1400f6148;
      }
      plVar3 = &local_468;
    }
    FUN_1400f8a70(plVar3,param_6);
  }
LAB_1400f6148:
  FUN_14000efe0(local_328);
  uVar11 = FUN_14000efe0(local_228);
  lVar1 = lStack_378;
  for (lVar10 = local_380; lVar10 != lVar1; lVar10 = lVar10 + 0x38) {
    lVar6 = func_0x0001400f8f40(uVar11,lVar10 + 8);
    uVar7 = FUN_14000ca60(local_218,&DAT_140478adc);
    uVar7 = FUN_14000ca60(uVar7,(&PTR_PTR_140482f88)[(longlong)*(int *)(lVar6 + 0x20) * 2]);
    uVar7 = FUN_14000ca60(uVar7,&DAT_140473978);
    uVar7 = FUN_14000cc90(uVar7,lVar10 + 8);
    uVar7 = FUN_14000ca60(uVar7,&DAT_140478a8c);
    uVar11 = FUN_14000cc90(uVar7,lVar6);
  }
  if (param_3 != 0) {
    if (param_3 != 1) {
      uVar7 = FUN_14000ca60(local_318,"PS_OUTPUT main(VS_OUTPUT IN");
      uVar8 = FUN_14000ef40(local_228,&local_568);
      uVar7 = FUN_14000cc90(uVar7,uVar8);
      FUN_14000ca60(uVar7,")\n{\n\tPS_OUTPUT OUT;\n");
                    /* WARNING: Subroutine does not return */
      FUN_140017310(&local_568);
    }
    if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x130) < DAT_1404e92b8) &&
       (FUN_14028b210(&DAT_1404e92b8), DAT_1404e92b8 == -1)) {
      func_0x000140017240(&DAT_1404e92c0,"[input:triangles]");
      FUN_14028b4e0(0x1404249e0);
      FUN_14028b1a0(&DAT_1404e92b8);
    }
    uVar7 = func_0x0001400171e0(&DAT_1404e92c0);
    lVar10 = FUN_140031e40(param_5,uVar7,0);
    if (lVar10 == -1) {
      pcVar9 = "void main(point VS_OUTPUT IN[1], inout TriangleStream<PS_INPUT> OUT";
    }
    else {
      FUN_1400f9120(param_5,lVar10,DAT_1404e92d0);
      pcVar9 = "void main(triangle VS_OUTPUT IN[3], inout TriangleStream<PS_INPUT> OUT";
    }
    uVar7 = FUN_14000ca60(local_318,pcVar9);
    uVar8 = FUN_14000ef40(local_228,&local_568);
    uVar7 = FUN_14000cc90(uVar7,uVar8);
    FUN_14000ca60(uVar7,")\n{\n\t");
                    /* WARNING: Subroutine does not return */
    FUN_140017310(&local_568);
  }
  uVar7 = FUN_14000ca60(local_318,"VS_OUTPUT main(VS_INPUT IN");
  uVar8 = FUN_14000ef40(local_228,&local_568);
  uVar7 = FUN_14000cc90(uVar7,uVar8);
  FUN_14000ca60(uVar7,")\n{\n\tVS_OUTPUT OUT;\n");
                    /* WARNING: Subroutine does not return */
  FUN_140017310(&local_568);
}

