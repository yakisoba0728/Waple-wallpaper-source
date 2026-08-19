// Function: FUN_1404a9174
// Addr: 1404a9174
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9174(char *param_1,uint *param_2)

{
  char *pcVar1;
  uint uVar2;
  byte *in_RAX;
  uint *puVar3;
  char cVar4;
  byte bVar5;
  undefined6 uVar6;
  uint unaff_ESP;
  longlong unaff_RDI;
  
  uVar6 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar4 = (char)param_2;
  *param_2 = *param_2 & unaff_ESP;
  *in_RAX = *in_RAX | (byte)in_RAX;
  bVar5 = (byte)((ulonglong)param_2 >> 8) & (byte)((ulonglong)in_RAX >> 8);
  puVar3 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),(ushort)(byte)((byte)in_RAX ^ *in_RAX)
                           );
  uVar2 = (uint)puVar3 ^ *puVar3;
  pcVar1 = (char *)(CONCAT62(uVar6,CONCAT11(bVar5,cVar4)) + unaff_RDI);
  *pcVar1 = *pcVar1 + bVar5;
  param_1[unaff_RDI] = param_1[unaff_RDI] | bVar5;
  uVar2 = CONCAT31((int3)(uVar2 >> 8),(char)uVar2 + cVar4) + 0x94000c67;
  *param_1 = *param_1 + (char)unaff_ESP;
  *(byte *)CONCAT62(uVar6,CONCAT11(bVar5,cVar4)) =
       *(byte *)CONCAT62(uVar6,CONCAT11(bVar5,cVar4)) | (byte)uVar2;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

