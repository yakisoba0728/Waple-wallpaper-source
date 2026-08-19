// Function: FUN_1404b01a8
// Addr: 1404b01a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b01a8(int *param_1,uint *param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  longlong in_RAX;
  uint unaff_EBX;
  uint uVar3;
  
  bVar1 = *param_4;
  *param_4 = *param_4 + (byte)in_RAX;
  puVar5 = (uint *)(in_RAX * 2);
  uVar4 = (uint)CARRY1(bVar1,(byte)in_RAX);
  uVar2 = *puVar5;
  uVar6 = (uint)in_RAX;
  uVar3 = *puVar5;
  *puVar5 = uVar3 + uVar6 + uVar4;
  *param_1 = *param_1 + uVar6 + (uint)(CARRY4(uVar2,uVar6) || CARRY4(uVar3 + uVar6,uVar4));
  *param_2 = *param_2 & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

