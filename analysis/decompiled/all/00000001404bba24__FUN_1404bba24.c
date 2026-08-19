// Function: FUN_1404bba24
// Addr: 1404bba24
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bba24(longlong param_1,char *param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  longlong in_RAX;
  uint *puVar4;
  char *unaff_RBX;
  char unaff_SPL;
  ulonglong unaff_RDI;
  
  *(byte *)(in_RAX + param_1) = *(byte *)(in_RAX + param_1) | (byte)param_2;
  puVar4 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),0x97);
  *puVar4 = *puVar4 & (uint)puVar4;
  *(int *)(unaff_RDI - 0x46cbffdf) = *(int *)(unaff_RDI - 0x46cbffdf) << 1;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)puVar4 = (char)*puVar4 + -0x69;
  *(char *)((longlong)puVar4 + -0x2effde69) =
       *(char *)((longlong)puVar4 + -0x2effde69) + (char)((ulonglong)param_2 >> 8);
  puVar4 = (uint *)(unaff_RDI & 0xffffffff);
  *puVar4 = *puVar4 & (uint)unaff_RDI;
  bVar3 = (byte)puVar4 ^ 0xb9;
  bVar1 = *param_4;
  *param_4 = *param_4 + bVar3;
  cVar2 = *unaff_RBX;
  *param_2 = *param_2 + (byte)param_2;
  cRam1f210000300cd00e = bVar3 + cVar2 + CARRY1(bVar1,bVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

