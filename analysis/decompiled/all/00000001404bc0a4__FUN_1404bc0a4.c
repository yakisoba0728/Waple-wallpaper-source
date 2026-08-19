// Function: FUN_1404bc0a4
// Addr: 1404bc0a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bc0a4(longlong param_1)

{
  char cVar1;
  uint *in_RAX;
  char *pcVar2;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined8 unaff_RBP;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  cVar1 = (char)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + cVar1;
  *(char *)(param_1 + 0x22) = *(char *)(param_1 + 0x22) + unaff_BL;
  pcVar2 = (char *)(param_1 + 0x22 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 2);
  *pcVar2 = *pcVar2 + cVar1;
  pcVar2 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) + unaff_BH,cVar1));
  uRamfffffffffffffff8 = unaff_RBP;
  uRam00000001a450c0d0 =
       uRam00000001a450c0d0 &
       (int)CONCAT71((int7)((ulonglong)pcVar2 >> 8),cVar1 + *pcVar2) + 0xc0000654U;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

