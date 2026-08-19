// Function: FUN_1404b3d00
// Addr: 1404b3d00
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3d00(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  uint uVar2;
  char cVar4;
  char *in_RAX;
  char *pcVar3;
  uint *puVar5;
  undefined8 unaff_RBX;
  longlong unaff_RSI;
  byte *unaff_RDI;
  char in_CF;
  char in_ZF;
  
  puVar5 = (uint *)(param_1 + -1);
  if (puVar5 == (uint *)0x0 || in_ZF != '\0') {
    *param_4 = *param_4 + (char)in_RAX;
    pcVar3 = (char *)((ulonglong)in_RAX & 0xffffffffffffff0b);
    cVar4 = (char)((ulonglong)pcVar3 >> 8);
    (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] + cVar4;
    *(char *)((longlong)puVar5 + (longlong)pcVar3) =
         *(char *)((longlong)puVar5 + (longlong)pcVar3) + cVar4;
    cRam00000001522b5105 = cRam00000001522b5105 + (char)param_2;
    *unaff_RDI = *unaff_RDI >> 1 | *unaff_RDI << 7;
    *pcVar3 = *pcVar3 + (char)pcVar3;
    *puVar5 = *puVar5 & (uint)puVar5;
    cVar1 = (char)pcVar3 + *pcVar3;
    pcVar3 = (char *)CONCAT71((int7)((ulonglong)pcVar3 >> 8),cVar1);
    *(uint *)(pcVar3 + 0x6c900026) = *(uint *)(pcVar3 + 0x6c900026) | (uint)puVar5;
    *pcVar3 = *pcVar3 - cVar1;
    *(char *)puVar5 = *(char *)puVar5 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = (*in_RAX - (char)in_RAX) - in_CF;
  uVar2 = (uint)in_RAX | 0x50001882;
  *(char *)puVar5 = *(char *)puVar5 + (char)(uVar2 >> 8);
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
  *(char *)(param_2 + 0xd001872) =
       *(char *)(param_2 + 0xd001872) + (char)((ulonglong)unaff_RBX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

