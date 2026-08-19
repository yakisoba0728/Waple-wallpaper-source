// Function: FUN_1404ad7f8
// Addr: 1404ad7f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad7f8(char *param_1,uint *param_2)

{
  uint *puVar1;
  uint *in_RAX;
  longlong lVar2;
  longlong unaff_RBX;
  uint unaff_ESI;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  lVar2 = CONCAT71((int7)((ulonglong)in_RAX >> 8),
                   *(char *)(unaff_RBX + (ulonglong)bRam04001219d1001219));
  *param_1 = *param_1 + *(char *)(unaff_RBX + (ulonglong)bRam04001219d1001219);
  puVar1 = (uint *)(lVar2 * 2);
  *puVar1 = *puVar1 | (uint)lVar2;
  *param_2 = *param_2 | unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

