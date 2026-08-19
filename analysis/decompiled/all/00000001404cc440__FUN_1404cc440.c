// Function: FUN_1404cc440
// Addr: 1404cc440
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc440(char *param_1,undefined8 param_2,char param_3)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  uint *in_RAX;
  char cVar4;
  undefined6 uVar5;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  char unaff_R12B;
  
  uVar5 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar4 = (char)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  (&stack0x00000000)[(longlong)in_RAX] = (&stack0x00000000)[(longlong)in_RAX] + (char)param_2;
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + (longlong)in_RAX);
  *pcVar1 = *pcVar1 + cVar4;
  cVar3 = (char)((ulonglong)in_RAX >> 8);
  *(char *)((longlong)in_RAX + -0x1e) = *(char *)((longlong)in_RAX + -0x1e) + cVar3;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT62(uVar5,CONCAT11(cVar4,cVar3)) =
       *(char *)CONCAT62(uVar5,CONCAT11(cVar4,cVar3)) + (char)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  pcVar1 = (char *)(((ulonglong)in_RAX ^ 3) - 0x1e);
  *pcVar1 = *pcVar1 + cVar3;
  *param_1 = *param_1 + param_3;
  uVar2 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)((ulonglong)in_RAX ^ 3)) |
          uRam00000001474ecf73;
  bRam0000000142acc839 = bRam0000000142acc839 << 1 | (char)bRam0000000142acc839 < '\0';
  *(byte *)(ulonglong)uVar2 = *(byte *)(ulonglong)uVar2 ^ (byte)uVar2;
  *param_1 = *param_1 + (char)(uVar2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

