
extern inline void hw_send_rts(void);
extern inline int hw_check_cts(void);
extern inline void hw_tx_byte(unsigned char ch );


inline void hw_send_rts(void) 
{
        *HW_STS_REG |= L1_RTS;
}

inline int hw_check_cts(void)
{
     return(*HW_STS_REG & L1_CTS);

}

inline void hw_tx_byte(unsigned char ch )
{
    *HW_DATA_REG = ch;
}

