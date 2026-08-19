// Function: FUN_1404c6ea8
// Addr: 1404c6ea8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6ea8(void)

{
  char *pcVar1;
  undefined8 in_RAX;
  undefined7 uVar2;
  char unaff_BL;
  
  uVar2 = (undefined7)((ulonglong)in_RAX >> 8);
  pcVar1 = (char *)(CONCAT71((uint7)(uint3)((uint)((int)CONCAT71(uVar2,cRam54002fb0d8002fb0 +
                                                                       *(char *)CONCAT71(uVar2,
                                                  cRam54002fb0d8002fb0)) + -0x27fff21c) >> 8),0x2f)
                   + -0x4f);
  *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

