// Function: FUN_1404a334c
// Addr: 1404a334c
// Size: 1 bytes


void FUN_1404a334c(char *param_1)

{
  byte *pbVar1;
  byte bVar2;
  short in_AX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BH;
  bVar2 = (byte)((ushort)in_AX >> 8);
  pbVar1 = (byte *)((ulonglong)
                    CONCAT31((int3)(char)bVar2,(byte)in_AX | *(byte *)(ulonglong)(uint)(int)in_AX) +
                   0x7826000b);
  *pbVar1 = *pbVar1 ^ (byte)param_1;
  *param_1 = *param_1 + (bVar2 | 10);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

