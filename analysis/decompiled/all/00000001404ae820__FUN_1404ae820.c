// Function: FUN_1404ae820
// Addr: 1404ae820
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae820(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong in_RAX;
  int *piVar3;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  byte in_CF;
  char *pcVar4;
  
  piVar3 = (int *)CONCAT71((int7)(in_RAX >> 8),
                           *(undefined1 *)
                            (CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (in_RAX & 0xff))
                          );
  uVar2 = (int)piVar3 + *piVar3 + (uint)in_CF;
  pcVar4 = (char *)(ulonglong)uVar2;
  *param_1 = *param_1 + '\b';
  cVar1 = (char)uVar2;
  *pcVar4 = *pcVar4 + cVar1;
  pcVar4[-0x61ffeca2] = pcVar4[-0x61ffeca2] + cVar1;
  *param_4 = *param_4 + '\x10';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

