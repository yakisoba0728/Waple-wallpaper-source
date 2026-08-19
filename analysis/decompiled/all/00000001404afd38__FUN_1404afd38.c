// Function: FUN_1404afd38
// Addr: 1404afd38
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404afd33) overlaps instruction at (ram,0x0001404afd32)
    */

void FUN_1404afd38(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte extraout_AL;
  char extraout_AL_00;
  char cVar2;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  undefined1 uVar3;
  byte bVar4;
  undefined6 uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  
  bVar7 = (byte)((ulonglong)param_2 >> 8);
  bVar6 = (byte)param_2;
  uVar5 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar4 = (byte)((ulonglong)param_1 >> 8);
  uVar3 = (undefined1)param_1;
  do {
    func_0x00013c4afd52();
    *(undefined1 *)CONCAT62(uVar5,CONCAT11(bVar4,uVar3)) =
         *(undefined1 *)CONCAT62(uVar5,CONCAT11(bVar4,uVar3));
    *(char *)CONCAT62(extraout_var_00,CONCAT11(extraout_AH_00,extraout_AL_00)) =
         *(char *)CONCAT62(extraout_var_00,CONCAT11(extraout_AH_00,extraout_AL_00)) + extraout_AL_00
    ;
    pbVar1 = (byte *)(CONCAT62(extraout_var_00,CONCAT11(extraout_AH_00,extraout_AL_00)) + -0x18);
    bVar8 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar6;
    cVar2 = extraout_AL_00 + CARRY1(bVar8,bVar6);
    *(char *)CONCAT62(extraout_var_00,CONCAT11(extraout_AH_00,cVar2)) =
         *(char *)CONCAT62(extraout_var_00,CONCAT11(extraout_AH_00,cVar2)) + cVar2;
    *(undefined1 *)CONCAT62(uVar5,CONCAT11(bVar4,uVar3)) =
         *(undefined1 *)CONCAT62(uVar5,CONCAT11(bVar4,uVar3));
    *(char *)CONCAT62(extraout_var_00,CONCAT11(extraout_AH_00,cVar2)) =
         *(char *)CONCAT62(extraout_var_00,CONCAT11(extraout_AH_00,cVar2)) + cVar2;
    bVar8 = CARRY1(bVar4,bVar7);
    bVar4 = bVar4 + bVar7;
    func_0x00012ab1fd3e();
    cVar2 = extraout_AL + bVar8 + -4 + CARRY1(extraout_AL,bVar8);
    *(undefined1 *)CONCAT62(uVar5,CONCAT11(bVar4,uVar3)) =
         *(undefined1 *)CONCAT62(uVar5,CONCAT11(bVar4,uVar3));
    *(char *)CONCAT62(extraout_var,CONCAT11(extraout_AH,cVar2)) =
         *(char *)CONCAT62(extraout_var,CONCAT11(extraout_AH,cVar2)) + cVar2;
    func_0x0001293ffd4e();
  } while( true );
}

