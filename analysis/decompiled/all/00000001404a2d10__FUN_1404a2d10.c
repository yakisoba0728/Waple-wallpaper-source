// Function: FUN_1404a2d10
// Addr: 1404a2d10
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2d10(char *param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  char cVar5;
  uint *in_RAX;
  uint *puVar4;
  char cVar6;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar2 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX | bVar2;
  puVar4 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) * '\x02' + (char)param_2 + bVar2
                                     ,bVar2));
  uVar3 = (uint)puVar4 | *puVar4;
  cVar5 = (char)(uVar3 >> 8);
  param_1[param_2] = param_1[param_2] + cVar5;
  pcVar1 = (char *)((ulonglong)uVar3 + 5);
  *pcVar1 = *pcVar1 + cVar6;
  UNK_1404a329d = UNK_1404a329d + cVar6;
  *param_1 = *param_1 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

