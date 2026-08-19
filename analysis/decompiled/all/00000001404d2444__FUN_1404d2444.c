// Function: FUN_1404d2444
// Addr: 1404d2444
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d2444(longlong param_1,longlong param_2,char param_3)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  byte *in_RAX;
  char unaff_BL;
  char unaff_BH;
  uint unaff_ESP;
  uint unaff_EBP;
  char *unaff_R14;
  bool bVar5;
  
  *(char *)(param_1 + 0x23) = *(char *)(param_1 + 0x23) + unaff_BH;
  *unaff_R14 = *unaff_R14 + param_3;
  bVar4 = (byte)in_RAX;
  *(uint *)(in_RAX + param_2) = (*(int *)(in_RAX + param_2) - (int)in_RAX) - (uint)(bVar4 < *in_RAX)
  ;
  *in_RAX = *in_RAX + bVar4;
  bVar2 = *in_RAX;
  *in_RAX = *in_RAX + bVar4;
  bVar5 = CARRY4(uRam00000001b8722468,unaff_ESP);
  uVar3 = uRam00000001b8722468 + unaff_ESP;
  uRam00000001b8722468 = uVar3 + CARRY1(bVar2,bVar4);
  puVar1 = (uint *)((ulonglong)
                    (((int)in_RAX - *(int *)in_RAX) -
                    (uint)(bVar5 || CARRY4(uVar3,(uint)CARRY1(bVar2,bVar4)))) + 0x1c);
  *puVar1 = *puVar1 & unaff_EBP;
  cRam000000014f4d5f66 = cRam000000014f4d5f66 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

