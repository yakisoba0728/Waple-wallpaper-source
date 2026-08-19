// Function: FUN_1404ceebc
// Addr: 1404ceebc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404ceed5) */

void FUN_1404ceebc(char *param_1,char *param_2)

{
  char cVar1;
  undefined8 in_RAX;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char in_CF;
  char *pcVar2;
  
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BH + in_CF;
  *param_2 = *param_2 + (char)in_RAX;
  cVar1 = (char)in_RAX + '\x06';
  pcVar2 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
  *pcVar2 = *pcVar2 + cVar1;
  *param_1 = *param_1 + unaff_BL;
  uRam00000001458ef7cf = uRam00000001458ef7cf | (uint)pcVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

