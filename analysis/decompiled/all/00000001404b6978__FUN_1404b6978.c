// Function: FUN_1404b6978
// Addr: 1404b6978
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6978(int *param_1,char param_2)

{
  uint *puVar1;
  byte bVar2;
  byte *in_RAX;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  int unaff_ESI;
  undefined8 *in_R11;
  
  *in_R11 = CONCAT44(unaff_0000001c,unaff_EBX);
  in_RAX[unaff_RBP * 2 + 0x4b] = in_RAX[unaff_RBP * 2 + 0x4b] + param_2;
  bVar2 = (byte)in_RAX;
  *(byte *)param_1 = (char)*param_1 + bVar2;
  *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) = *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) & bVar2;
  *in_RAX = *in_RAX + (char)((ulonglong)in_RAX >> 8);
  *in_RAX = *in_RAX + bVar2;
  *param_1 = *param_1 + unaff_ESI;
  puVar1 = (uint *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2 | *in_RAX) + -0x77dafffe);
  *puVar1 = *puVar1 ^ unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

