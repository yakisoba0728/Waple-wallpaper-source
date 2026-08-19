// Function: FUN_1404ae088
// Addr: 1404ae088
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae088(byte param_1,short *param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined4 in_EAX;
  undefined3 uVar7;
  undefined4 in_register_00000004;
  char unaff_BH;
  float10 in_ST0;
  undefined4 uVar5;
  uint uVar6;
  
  uVar7 = (undefined3)((uint)in_EAX >> 8);
  bVar3 = (byte)in_EAX ^ *(byte *)CONCAT44(in_register_00000004,in_EAX);
  uVar5 = CONCAT31(uVar7,bVar3);
  pcVar1 = (char *)(CONCAT44(in_register_00000004,uVar5) + 0x33);
  *pcVar1 = *pcVar1 + unaff_BH;
  bVar2 = *(byte *)CONCAT44(in_register_00000004,uVar5);
  *(byte *)CONCAT44(in_register_00000004,uVar5) =
       *(char *)CONCAT44(in_register_00000004,uVar5) + param_1;
  cVar4 = bVar3 + *(char *)CONCAT44(in_register_00000004,uVar5) + CARRY1(bVar2,param_1);
  uVar6 = CONCAT31(uVar7,cVar4);
  *param_2 = (short)in_ST0;
  *(uint *)CONCAT44(in_register_00000004,uVar6) =
       *(uint *)CONCAT44(in_register_00000004,uVar6) & uVar6;
  *(char *)CONCAT44(in_register_00000004,uVar6) =
       *(char *)CONCAT44(in_register_00000004,uVar6) + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

