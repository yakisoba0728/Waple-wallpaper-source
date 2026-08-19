// Function: FUN_1404d2d04
// Addr: 1404d2d04
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404d2d3d) */
/* WARNING: Removing unreachable block (ram,0x0001404d2d46) */
/* WARNING: Removing unreachable block (ram,0x0001404d2d72) */
/* WARNING: Removing unreachable block (ram,0x0001404d2d82) */
/* WARNING: Removing unreachable block (ram,0x0001404d2d57) */

void FUN_1404d2d04(char *param_1,longlong param_2,char *param_3,longlong param_4)

{
  char cVar1;
  char *in_RAX;
  undefined7 uVar3;
  longlong unaff_RBP;
  char in_R10B;
  undefined7 in_register_00000091;
  char unaff_R15B;
  char *pcVar2;
  
  *(char *)CONCAT71(in_register_00000091,in_R10B) =
       *(char *)CONCAT71(in_register_00000091,in_R10B) + unaff_R15B;
  cVar1 = (char)in_RAX;
  *in_RAX = *in_RAX + cVar1;
  *(char *)(unaff_RBP + 0x2c) = *(char *)(unaff_RBP + 0x2c) - cVar1;
  *(char *)(param_4 + 0x2c) = *(char *)(param_4 + 0x2c) + in_R10B;
  param_1[CONCAT71(in_register_00000091,in_R10B)] =
       param_1[CONCAT71(in_register_00000091,in_R10B)] + (char)param_3;
  *(byte *)(param_2 + 0x39) = *(byte *)(param_2 + 0x39) ^ (byte)((ulonglong)param_2 >> 8);
  uVar3 = (undefined7)((ulonglong)in_RAX >> 8);
  pcVar2 = (char *)(CONCAT71(uVar3,cVar1 * '\x02') + -0x12f7ffd5);
  *pcVar2 = *pcVar2 + -2;
  cVar1 = cVar1 * '\x02' + *param_3;
  pcVar2 = (char *)CONCAT71(uVar3,cVar1);
  *pcVar2 = *pcVar2 + cVar1;
  *param_1 = *param_1 + (char)param_2;
  uRam00000001458f3637 = uRam00000001458f3637 | (uint)pcVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

