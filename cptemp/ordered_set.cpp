# i n c l u d e   < e x t / p b _ d s / a s s o c _ c o n t a i n e r . h p p >    
 # i n c l u d e   < e x t / p b _ d s / t r e e _ p o l i c y . h p p >                
 u s i n g   n a m e s p a c e   _ _ g n u _ p b d s ;  
  
 t e m p l a t e < t y p e n a m e   T >  
 c l a s s   t r e a p   {  
 t y p e d e f   t r e e < T ,   n u l l _ t y p e ,   l e s s _ e q u a l < T > ,   r b _ t r e e _ t a g ,   t r e e _ o r d e r _ s t a t i s t i c s _ n o d e _ u p d a t e >   o r d e r e d _ s e t ;  
 p u b l i c :  
     o r d e r e d _ s e t   s t ;      
     t r e a p ( )   {  
         s t . c l e a r ( ) ;  
     }  
     v o i d   a d d ( c o n s t   T   & v )   {  
         s t . i n s e r t ( v ) ;      
     }  
     v o i d   e l i m i n a t e ( c o n s t   T   & v )   {  
         a u t o   i t   =   s t . u p p e r _ b o u n d ( v ) ;  
         a s s e r t ( i t   ! =   s t . e n d ( )   & &   * i t   = =   v ) ;  
         s t . e r a s e ( i t ) ;  
     }  
     i n t   c o u n t _ s m a l l e r _ t h a n ( c o n s t   T   & v )   c o n s t   {  
         r e t u r n   s t . o r d e r _ o f _ k e y ( v ) ;  
     }  
     T   k t h _ e l e m e n t ( c o n s t   i n t   & k ,   c o n s t   i n t   & i n d e x   =   0 )   c o n s t   {  
         r e t u r n   * s t . f i n d _ b y _ o r d e r ( k   -   i n d e x ) ;  
     }  
     s i z e _ t   s i z e ( )   c o n s t   {  
         r e t u r n   s t . s i z e ( ) ;  
     }  
 } ; 