// Function: FUN_140219520
// Addr: 140219520
// Size: 641 bytes


void FUN_140219520(undefined4 *param_1,undefined8 param_2,longlong param_3,code *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  for (; 0x20 < param_3; param_3 = param_3 + -0x20) {
    puVar1 = param_1 + 0x200;
    puVar3 = param_1;
    if (param_1 != puVar1) {
      while (puVar3 = puVar3 + 0x10, puVar3 != puVar1) {
        local_78 = *puVar3;
        local_58 = *(undefined8 *)(puVar3 + 8);
        local_60 = *(undefined8 *)(puVar3 + 6);
        local_74 = puVar3[1];
        local_70 = puVar3[2];
        local_6c = puVar3[3];
        *(undefined8 *)(puVar3 + 8) = 0;
        *(undefined8 *)(puVar3 + 6) = 0;
        local_68 = *(undefined8 *)(puVar3 + 4);
        *(undefined8 *)(puVar3 + 4) = 0;
        local_48 = *(undefined8 *)(puVar3 + 0xc);
        local_40 = *(undefined8 *)(puVar3 + 0xe);
        local_50 = *(undefined8 *)(puVar3 + 10);
        *(undefined8 *)(puVar3 + 0xe) = 0;
        *(undefined8 *)(puVar3 + 0xc) = 0;
        *(undefined8 *)(puVar3 + 10) = 0;
        cVar4 = (*param_4)(&local_78,param_1);
        if (cVar4 == '\0') {
          cVar4 = (*param_4)(&local_78,puVar3 + -0x10);
          puVar6 = puVar3 + -0x10;
          puVar5 = puVar3;
          while (puVar2 = puVar6, cVar4 != '\0') {
            *puVar5 = *puVar2;
            puVar5[1] = puVar2[1];
            puVar5[2] = puVar2[2];
            puVar5[3] = puVar2[3];
            FUN_140219470(puVar5 + 4,puVar2 + 4);
            FUN_140219470(puVar5 + 10,puVar2 + 10);
            cVar4 = (*param_4)(&local_78,puVar2 + -0x10);
            puVar6 = puVar2 + -0x10;
            puVar5 = puVar2;
          }
          *puVar5 = local_78;
          puVar5[1] = local_74;
          puVar5[2] = local_70;
          puVar5[3] = local_6c;
        }
        else {
          puVar5 = puVar3 + 0x10;
          for (puVar6 = puVar3; puVar6 != param_1; puVar6 = puVar6 + -0x10) {
            puVar5[-0x10] = puVar6[-0x10];
            puVar5[-0xf] = puVar6[-0xf];
            puVar5[-0xe] = puVar6[-0xe];
            puVar5[-0xd] = puVar6[-0xd];
            FUN_140219470();
            FUN_140219470(puVar5 + -6,puVar6 + -6);
            puVar5 = puVar5 + -0x10;
          }
          *param_1 = local_78;
          param_1[1] = local_74;
          param_1[2] = local_70;
          param_1[3] = local_6c;
          puVar5 = param_1;
        }
        FUN_140219470(puVar5 + 4,&local_68);
        FUN_140219470(puVar5 + 10,&local_50);
        FUN_140031b80(&local_50);
        FUN_140031b80(&local_68);
      }
    }
    param_1 = puVar1;
  }
  FUN_140216ac0(param_1,param_2,param_4);
  return;
}

