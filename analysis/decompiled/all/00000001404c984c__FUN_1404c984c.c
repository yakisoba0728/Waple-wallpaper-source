// Function: FUN_1404c984c
// Addr: 1404c984c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c984c(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  char cVar3;
  byte *in_RAX;
  uint *puVar2;
  undefined6 uVar4;
  uint unaff_EBX;
  int unaff_ESI;
  undefined4 unaff_00000034;
  uint unaff_EDI;
  uint *puVar5;
  char in_R11B;
  
  uVar4 = (undefined6)((ulonglong)param_2 >> 0x10);
  puVar2 = (uint *)(ulonglong)unaff_EDI;
  puVar5 = (uint *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX ^ *in_RAX) & 0xffffffff);
  *param_1 = *param_1 + in_R11B;
  *puVar5 = *puVar5 & unaff_EDI;
  *(char *)puVar5 = (char)*puVar5 + (char)param_1;
  *(int *)CONCAT62(uVar4,CONCAT11(0x11,(char)param_2)) =
       *(int *)CONCAT62(uVar4,CONCAT11(0x11,(char)param_2)) + unaff_ESI;
  *(byte *)puVar2 = (byte)*puVar2 + (char)param_1;
  if (param_1 == (char *)0x1 || (byte)*puVar2 == 0) {
    pbVar1 = (byte *)((longlong)puVar2 + CONCAT44(unaff_00000034,unaff_ESI) * 2);
    *pbVar1 = *pbVar1 << 3 | *pbVar1 >> 5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)puVar2 = (byte)*puVar2 ^ (byte)unaff_EDI;
  cVar3 = (char)(unaff_EDI >> 8);
  *(byte *)puVar2 = (byte)*puVar2 + cVar3;
  *(byte *)CONCAT44(unaff_00000034,unaff_ESI) = *(byte *)CONCAT44(unaff_00000034,unaff_ESI) >> 1;
  *(byte *)((longlong)puVar2 + 1) = *(byte *)((longlong)puVar2 + 1) + cVar3;
  *(byte *)puVar2 = (byte)*puVar2 + (byte)unaff_EDI;
  *puVar2 = *puVar2 & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

