// Function: FUN_1404ab178
// Addr: 1404ab178
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab178(byte *param_1)

{
  uint uVar1;
  byte bVar2;
  undefined4 in_EAX;
  undefined3 uVar5;
  uint uVar3;
  undefined4 in_register_00000004;
  char unaff_BL;
  longlong unaff_RSI;
  undefined4 uVar4;
  
  uVar5 = (undefined3)((uint)in_EAX >> 8);
  bVar2 = *param_1;
  *param_1 = *param_1 + 0x4a;
  uVar3 = CONCAT31(uVar5,-(0xb5 < bVar2) + '?');
  (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] + unaff_BL;
  uVar1 = *(uint *)CONCAT44(in_register_00000004,uVar3);
  *(uint *)CONCAT44(in_register_00000004,uVar3) =
       *(int *)CONCAT44(in_register_00000004,uVar3) - uVar3;
  bVar2 = (-(0xb5 < bVar2) + '>') - (uVar1 < uVar3);
  uVar4 = CONCAT31(uVar5,bVar2);
  *(byte *)CONCAT44(in_register_00000004,uVar4) =
       *(byte *)CONCAT44(in_register_00000004,uVar4) & bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

